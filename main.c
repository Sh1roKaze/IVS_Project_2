#include <gtk/gtk.h>

typedef struct {
    
    GtkWidget *window;
    
} App;

    
static void activate (GtkApplication* app, gpointer user_data) {
    
  GtkWidget *window_main;

  window_main = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window_main), "Calculator");
  gtk_window_set_default_size (GTK_WINDOW (window_main), 200, 200);
  gtk_widget_show_all (window_main);
  
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
  
  //link the window_main in builder to calculator->window
  calculator->window = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "window_main"));
  
  //connects signals
  gtk_builder_connect_signals (calcBuilder, calculator);

  //frees calcBuilder
  g_object_unref (G_OBJECT (calcBuilder));
  
  //connects signal for destruction with window  
  g_signal_connect (calculator->window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
        
  //bring window into spotlight
  gtk_widget_show (calculator->window);                

  //main gtk loop
  gtk_main ();


  return 0;
    
}
