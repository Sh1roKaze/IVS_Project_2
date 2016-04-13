#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct {
    
    GtkWidget *window_main;
    GtkTextBuffer *textbuffer;
    GtkTextView *textview;
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


typedef struct {
    
    char first[21];
    char operator[2];
    char second[21];
    char result[21];
    
  } magic_struct;

/* Magic variables */  
App *calculator;
magic_struct textStruct;


#define APPEND(textStruct, value) { \
    if (strlen(textStruct.result) > 0) { \
        /*clears textStruct */ \
        memset(textStruct.first, 0, sizeof(char)); \
        memset(textStruct.second, 0, sizeof(char)); \
        memset(textStruct.operator, 0, sizeof(char)); \
        memset(textStruct.result, 0, sizeof(char)); \
    } \
    if (strlen(textStruct.operator) == 0) { \
        if (strlen(textStruct.first) < 21) \
            strcat(textStruct.first, value); \
    } else { \
        if (strlen(textStruct.second) < 21) \
        strcat(textStruct.second, value); \
    }\
}

void to_s (magic_struct textStruct, char *my_string) { 
    if (strlen(textStruct.result) ==  0) { 
        if (strlen(textStruct.operator) == 0) { 
            strcat(my_string, "\n"); 
            strcat(my_string, textStruct.first); 
        } else { 
            strcat(my_string, textStruct.first); 
            strcat(my_string, " "); 
            strcat(my_string, textStruct.operator);
            strcat(my_string, "\n"); 
            strcat(my_string, textStruct.second); 
        }
    } else {
        strcat(my_string, textStruct.first); 
        strcat(my_string, " "); 
        strcat(my_string, textStruct.operator);
        strcat(my_string, " "); 
        strcat(my_string, textStruct.second); 
        strcat(my_string, "\n"); 
        strcat(my_string, textStruct.result); 
    }
}


void b_num_on_click(char *value) {
    
    char my_string[50];
        
    APPEND(textStruct, value)
    
    to_s(textStruct, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
    
}
  
  
void button0_onclick() {
    
    b_num_on_click("0");
}

void button1_onclick() {
    
    b_num_on_click("1");
}

void button2_onclick() {
    
    b_num_on_click("2");
}

void button3_onclick() {

    b_num_on_click("3");    
}

void button4_onclick() {
    
    b_num_on_click("4");
}

void button5_onclick() {
    
    b_num_on_click("5");
}

void button6_onclick() {
    
    b_num_on_click("6");
}

void button7_onclick() {
    
    b_num_on_click("7");
}

void button8_onclick() {
    
    b_num_on_click("8");
}

void button9_onclick() {
    
    b_num_on_click("9");
}

void buttonDot_onclick() {

    b_num_on_click(".");   
    
}

void buttonEqual_onclick() {
    
    char rest[21];
    
    double first = strtod(textStruct.first,rest);
    
}

void buttonPlus_onclick() {

    char my_string[50];
    
    strcat(textStruct.operator, "+");
    
    to_s(textStruct, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);    
    
}

void buttonMinus_onclick() {
    
    
}

void buttonMultiply_onclick() {
    
    
}

void buttonDivide_onclick() {
    
    
}

void buttonPower_onclick() {
    
    
}

void buttonFactorial_onclick() {

    
    
}

void buttonCE_onclick() {
    
    
}

void buttonC_onclick() {
    
    
    
}


int main (int argc, char **argv) {
  
  //variables  
  
  GtkBuilder *calcBuilder;
  
  //allocates mem for an App
  calculator = g_slice_new(App);

  //inits gtk
  gtk_init (&argc, &argv);
  
  //inits interface builder
  calcBuilder = gtk_builder_new_from_file("interface.glade");
  
  //link the objects created by builder to the "calculator" structure
  calculator->window_main = GTK_WIDGET(gtk_builder_get_object (calcBuilder, "window_main"));
  calculator->textbuffer = GTK_TEXT_BUFFER(gtk_builder_get_object (calcBuilder, "textbuffer"));
  
  calculator->button0 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button0"));
  calculator->button1 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button1"));
  calculator->button2 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button2"));
  calculator->button3 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button3"));
  calculator->button4 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button4"));
  calculator->button5 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button5"));
  calculator->button6 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button6"));
  calculator->button7 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button7"));
  calculator->button8 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button8"));
  calculator->button9 = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "button9"));
  
  calculator->buttonDot = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonDot"));
  calculator->buttonEqual = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonEqual"));
  calculator->buttonPlus = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonPlus"));
  calculator->buttonMinus = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonMinus"));
  calculator->buttonMultiply = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonMultiply"));
  calculator->buttonDivide = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonDivide"));
  calculator->buttonPower = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonPower"));
  calculator->buttonFactorial = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonFactorial"));
  calculator->buttonCE = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonCE"));
  calculator->buttonC = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonC"));
  
  //connects signals
  gtk_builder_connect_signals (calcBuilder, calculator);

  //frees calcBuilder
  g_object_unref (G_OBJECT (calcBuilder));
  
  //connects signal for destruction with window  
  g_signal_connect(calculator->window_main, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  
  g_signal_connect(calculator->button0, "clicked", G_CALLBACK(button0_onclick), NULL);
  g_signal_connect(calculator->button1, "clicked", G_CALLBACK(button1_onclick), NULL);
  g_signal_connect(calculator->button2, "clicked", G_CALLBACK(button2_onclick), NULL);
  g_signal_connect(calculator->button3, "clicked", G_CALLBACK(button3_onclick), NULL);
  g_signal_connect(calculator->button4, "clicked", G_CALLBACK(button4_onclick), NULL);
  g_signal_connect(calculator->button5, "clicked", G_CALLBACK(button5_onclick), NULL);
  g_signal_connect(calculator->button6, "clicked", G_CALLBACK(button6_onclick), NULL);
  g_signal_connect(calculator->button7, "clicked", G_CALLBACK(button7_onclick), NULL);
  g_signal_connect(calculator->button8, "clicked", G_CALLBACK(button8_onclick), NULL);
  g_signal_connect(calculator->button9, "clicked", G_CALLBACK(button9_onclick), NULL);
  
  g_signal_connect(calculator->buttonDot, "clicked", G_CALLBACK(buttonDot_onclick), NULL);
  g_signal_connect(calculator->buttonEqual, "clicked", G_CALLBACK(buttonEqual_onclick), NULL);
  g_signal_connect(calculator->buttonPlus, "clicked", G_CALLBACK(buttonPlus_onclick), NULL);
  g_signal_connect(calculator->buttonMinus, "clicked", G_CALLBACK(buttonMinus_onclick), NULL);
  g_signal_connect(calculator->buttonMultiply, "clicked", G_CALLBACK(buttonMultiply_onclick), NULL);
  g_signal_connect(calculator->buttonDivide, "clicked", G_CALLBACK(buttonDivide_onclick), NULL);
  g_signal_connect(calculator->buttonPower, "clicked", G_CALLBACK(buttonPower_onclick), NULL);
  g_signal_connect(calculator->buttonFactorial, "clicked", G_CALLBACK(buttonFactorial_onclick), NULL);
  g_signal_connect(calculator->buttonCE, "clicked", G_CALLBACK(buttonCE_onclick), NULL);
  g_signal_connect(calculator->buttonC, "clicked", G_CALLBACK(buttonC_onclick), NULL);
  
  gtk_text_buffer_set_text (calculator->textbuffer, "\n", -1);
  
  //bring window into spotlight
  gtk_widget_show (calculator->window_main);                

  //main gtk loop
  gtk_main ();

  return 0;
    
}
