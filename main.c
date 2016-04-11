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
  
  calculator = g_slice_new(App);

  gtk_init (&argc, &argv);
  
  calcBuilder = gtk_builder_new_from_file("interface.glade");
  
  calculator->window = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "window_main"));
  
  gtk_builder_connect_signals (calcBuilder, calculator);

  g_object_unref (G_OBJECT (calcBuilder));
    
  g_signal_connect (calculator->window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
        
  gtk_widget_show (calculator->window);                

	//hlavni smycka gtk
  gtk_main ();


  return 0;
    
}
