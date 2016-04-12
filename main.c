#include <gtk/gtk.h>

typedef struct {
    
    GtkWidget *window_main;
    GtkTextBuffer *textbuffer;
    GtkButton *button0;
    GtkButton *button1;
    GtkButton *button2;
    GtkButton *button3;
    GtkButton *button4;
    GtkButton *button5;
    GtkButton *button6;
    GtkButton *button7;
    GtkButton *button8;
    GtkButton *button9;
    GtkButton *buttonDot;
    GtkButton *buttonEqual;
    GtkButton *buttonPlus;
    GtkButton *buttonMinus;
    GtkButton *buttonMultiply;
    GtkButton *buttonDivide;
    GtkButton *buttonPower;
    GtkButton *buttonFactorial;
    GtkButton *buttonCE;
    GtkButton *buttonC;
    
} App;

void button0_onclick() {
    
    FILE *output;
    
    output = fopen("button0","w");
    fclose(output);
    
}


int main (int argc, char **argv) {
  
  //variables  
  App *calculator;
  GtkBuilder *calcBuilder;
  
  //allocates mem for an App
  calculator = g_slice_new(App);

  //inits gtk
  gtk_init (&argc, &argv);
  
  //inits interface builder
  calcBuilder = gtk_builder_new_from_file("interface.glade");
  
  //link the objects created by builder to the "calculator" structure
  calculator->window_main = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "window_main"));
  calculator->button0 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button0"));
  calculator->button1 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button1"));
  calculator->button2 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button2"));
  calculator->button3 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button3"));
  calculator->button4 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button4"));
  calculator->button5 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button5"));
  calculator->button6 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button6"));
  calculator->button7 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button7"));
  calculator->button8 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button8"));
  calculator->button9 = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "button9"));
  
  calculator->buttonDot = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonDot"));
  calculator->buttonEqual = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonEqual"));
  calculator->buttonPlus = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonPlus"));
  calculator->buttonMinus = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonMinus"));
  calculator->buttonMultiply = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonMultiply"));
  calculator->buttonDivide = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonDivide"));
  calculator->buttonPower = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonPower"));
  calculator->buttonFactorial = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonFactorial"));
  calculator->buttonCE = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonCE"));
  calculator->buttonC = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "buttonC"));
  
  //connects signals
  gtk_builder_connect_signals (calcBuilder, calculator);

  //frees calcBuilder
  g_object_unref (G_OBJECT (calcBuilder));
  
  //connects signal for destruction with window  
  g_signal_connect (calculator->window_main, "destroy", G_CALLBACK (gtk_main_quit), NULL);
  g_signal_connect (calculator->button0, "clicked", G_CALLBACK (button0_onclick), NULL);
        
  //bring window into spotlight
  gtk_widget_show (calculator->window_main);                

  //main gtk loop
  gtk_main ();


  return 0;
    
}
