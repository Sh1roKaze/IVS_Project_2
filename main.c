/**
 * @file main.c
 * @author Jan Verny
 * @version 0.9
 *
 * A calculator implemented using gtk3 and it's own custom math library 'lib_math'. 
 * This application is developed for school project under GPL v3 license.
 */

#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include "lib_math.h"

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
    GtkButton *buttonSign;
    GtkButton *buttonPlus;
    GtkButton *buttonMinus;
    GtkButton *buttonMultiply;
    GtkButton *buttonDivide;
    GtkButton *buttonPower;
    GtkButton *buttonFactorial;
    GtkButton *buttonLog;
    GtkButton *buttonCE;
    GtkButton *buttonC;
    
} App;   


typedef struct {
    
    char first[42];
    char operator[2];
    char second[42];
    char result[42];
    
} text_struct;

/* Global variables */  
App *calculator;
text_struct appData;


#define APPEND(appData, value) { \
    if (strlen(appData.result) > 0) { \
        /*clears appData */ \
        memset(appData.first, 0, sizeof(char)); \
        memset(appData.second, 0, sizeof(char)); \
        memset(appData.operator, 0, sizeof(char)); \
        memset(appData.result, 0, sizeof(char)); \
    } \
    if (strlen(appData.operator) == 0) { \
        if (strlen(appData.first) < 21) \
            strcat(appData.first, value); \
    } else { \
        if (strlen(appData.second) < 21) \
        strcat(appData.second, value); \
    }\
}

/**
* This function converts appData into one string.
* 
* @param appData { Struct made of four strings. First, operator, second and result. }
* @param my_string { Result of conversion. }
* @return void;
**/

void to_s (text_struct appData, char *my_string) { 
    if (strlen(appData.result) ==  0) { 
        if (strlen(appData.operator) == 0) { 
            strcat(my_string, "\n"); 
            strcat(my_string, appData.first); 
        } else { 
            strcat(my_string, appData.first); 
            strcat(my_string, " "); 
            strcat(my_string, appData.operator);
            strcat(my_string, "\n"); 
            strcat(my_string, appData.second); 
        }
    } else {
        strcat(my_string, appData.first); 
        strcat(my_string, " "); 
        strcat(my_string, appData.operator);
        strcat(my_string, " "); 
        strcat(my_string, appData.second); 
        strcat(my_string, "\n"); 
        strcat(my_string, appData.result); 
    }
}

/**
* Handles click on a numeric button.
* 
* @param value {Signals what button was pushed. Values in range 0 - 9.}
* @return void;
**/

void b_num_on_click(char *value) {
    
    char my_string[128];
    memset(my_string, 0, sizeof(char));
        
    APPEND(appData, value)
    
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
} 

/**
* Evaluates result from appData.
* 
* @post Returns zero if operator is not supported.
* @return Result of the correct operation on first and second;
**/

double struct_eval () {
    
    char rest[42];
    double result = 0;
    
    void *ptr = &rest;
                
    double first = strtod(appData.first, ptr);
    double second = strtod(appData.second, ptr);
    
    switch ( (int) appData.operator[0]) {
        
        case 43:
            result = lib_sum(first, second);
            break;
            
        case 45:
            result = lib_sub(first, second);
            break;
            
        case 42:
            result = lib_mul(first, second);
            break;
            
        case 47:
            result = lib_div(first, second);
            break;
            
        case 94:            
                result = lib_exp(first, second);   
            break;            
            
        default:
            result = 0;
            break;  
        
    }
                
    return result; 
}

/**
* Handles click on an operator button.
* 
* @param value { Signals what button was pushed. }
* @return void;
**/

void b_oper_on_click(char *value) {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    if (strlen(appData.first) != 0) {
        if (strlen(appData.operator) == 0) {
            
            strcat(appData.operator, value);
            
            to_s(appData, my_string);

            gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);    
            
        } else {
            if (strlen(appData.second) > 0) {
                
                double result = struct_eval(value);
                
                memset(appData.first, 0, sizeof(char));
                memset(appData.second, 0, sizeof(char)); 
                memset(appData.operator, 0, sizeof(char)); 
                memset(appData.result, 0, sizeof(char));
                
                sprintf(appData.first,"%f",result);
                
                strcat(appData.operator, value);
    
                to_s(appData, my_string);
    
                gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);                
            } else {
                
                memset(appData.operator, 0, sizeof(char));
                strcat(appData.operator, value);
                to_s(appData, my_string);
                gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);                 
            }
        }
    }
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

    if (strlen(appData.operator) == 0) {
        if (strchr(appData.first, 46) == NULL) {
            b_num_on_click(".");
        }
    } else {
        if (strchr(appData.second, 46) == NULL) {
            b_num_on_click(".");
        }
    }   
}

void buttonEqual_onclick() {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
                
    double result = struct_eval();
                
    sprintf(appData.result,"%f",result);
    
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);  
}

void buttonPlus_onclick() {
    
    b_oper_on_click("+"); 
}

void buttonMinus_onclick() {
    
    b_oper_on_click("-");     
}

void buttonSign_onclick() {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    
    if (strlen(appData.operator) == 0) {
        if (strchr(appData.first, 45) == NULL) {
            strcpy(my_string, appData.first);
            memset(appData.first, 0, sizeof(char));
            strcat(appData.first,"-");
            strcat(appData.first, my_string);
        } else {
            
            strcpy(my_string, &appData.first[1]);
            memset(appData.first, 0, sizeof(char));
            strcat(appData.first, my_string);      
        }
    }
    
    else {
        
        if (strchr(appData.second, 45) == NULL) {
            strcpy(my_string, appData.second);
            memset(appData.second, 0, sizeof(char));
            strcat(appData.second,"-");
            strcat(appData.second, my_string);
        } else {
            
            strcpy(my_string, &appData.second[1]);
            memset(appData.second, 0, sizeof(char));
            strcat(appData.second, my_string);      
        }
            
    }
    
    memset(my_string, 0, sizeof(char));
    
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
}

void buttonMultiply_onclick() {
    
    b_oper_on_click("*");    
}

void buttonDivide_onclick() {
    
    b_oper_on_click("/"); 
}

void buttonPower_onclick() {

    b_oper_on_click("^"); 
}

void buttonFactorial_onclick() {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    
    if (strlen(appData.result) ==  0) { 
        if (strlen(appData.operator) == 0) { 
            
            char rest[42];
            double result;
    
            void *ptr = &rest;
                
            double first = strtol(appData.first, ptr, 0);
            
            if (first > 31) {
                result = 0;
            } else {
                result = lib_factorial(first);
            }
            
            sprintf(appData.result,"%f",result);
        }
    }    
        
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
}

void buttonLog_onclick () {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    
    if (strlen(appData.result) ==  0) { 
        if (strlen(appData.operator) == 0) { 
            
            char rest[42];
            double result;
    
            void *ptr = &rest;
                
            double first = strtol(appData.first, ptr, 0);
            
            if (first > 99900000) {
                result = 0;
            } else {
                result = lib_ln(first);
            }
            sprintf(appData.result,"%f",result);
        }
    }    
        
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);    
}


void buttonCE_onclick() {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    
    if (strlen(appData.result) ==  0) { 
        if (strlen(appData.operator) == 0) { 
            memset(appData.first, 0, sizeof(char)); 
        } else { 
            memset(appData.second, 0, sizeof(char));
        }
    } else {
        memset(appData.first, 0, sizeof(char)); 
        memset(appData.second, 0, sizeof(char)); 
        memset(appData.operator, 0, sizeof(char)); 
        memset(appData.result, 0, sizeof(char));
    }
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
}

void buttonC_onclick() {
    
    char my_string[124];
    memset(my_string, 0, sizeof(char));
    
    memset(appData.first, 0, sizeof(char)); 
    memset(appData.second, 0, sizeof(char)); 
    memset(appData.operator, 0, sizeof(char)); 
    memset(appData.result, 0, sizeof(char));    
    
    to_s(appData, my_string);
    
    gtk_text_buffer_set_text (calculator->textbuffer, my_string, -1);
}

static gboolean key_event(GtkWidget *widget, GdkEventKey *event) {
    
    switch (event->keyval) {
        
        case GDK_KEY_KP_0 :
            button0_onclick();
            break;
        
        case GDK_KEY_KP_1 :
            button1_onclick();
            break;
            
        case GDK_KEY_KP_2 :
            button2_onclick();
            break;
            
        case GDK_KEY_KP_3 :
            button3_onclick();
            break;
            
        case GDK_KEY_KP_4 :
            button4_onclick();
            break;
            
        case GDK_KEY_KP_5 :
            button5_onclick();
            break;
            
        case GDK_KEY_KP_6 :
            button6_onclick();
            break;     
            
        case GDK_KEY_KP_7 :
            button7_onclick();
            break;     
            
        case GDK_KEY_KP_8 :
            button8_onclick();
            break;
            
        case GDK_KEY_KP_9 :
            button9_onclick();
            break;
            
        case GDK_KEY_comma :
        case GDK_KEY_period :  
        case GDK_KEY_KP_Decimal :
            buttonDot_onclick();
            break;    
        
        case GDK_KEY_KP_Add :
            buttonPlus_onclick();
            break;
            
        case GDK_KEY_KP_Subtract :
            buttonMinus_onclick();
            break;
            
        case GDK_KEY_KP_Multiply :
            buttonMultiply_onclick();
            break;
            
        case GDK_KEY_KP_Divide :
            buttonDivide_onclick();
            break;     
            
        case GDK_KEY_Return :
        case GDK_KEY_KP_Enter :
            buttonEqual_onclick();
            break;     
        
        case GDK_KEY_BackSpace :
            buttonCE_onclick();
            break;    
            
        case GDK_KEY_Delete :
            buttonC_onclick();
            break;
            
        default: break;
    }
    
    return TRUE;
}


int main (int argc, char **argv) {
  
  //Gtk builder variable  
  GtkBuilder *calcBuilder;
  
  //allocates memory for an App
  calculator = g_slice_new(App);

  //inits gtk, only consumes gtk specific arguments
  gtk_init (&argc, &argv);
  
  //inits interface builder from file
  calcBuilder = gtk_builder_new_from_file("interface.glade");
  
  //links the objects created by builder to the "calculator" structure
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
  calculator->buttonSign = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonSign"));
  calculator->buttonPlus = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonPlus"));
  calculator->buttonMinus = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonMinus"));
  calculator->buttonMultiply = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonMultiply"));
  calculator->buttonDivide = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonDivide"));
  calculator->buttonPower = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonPower"));
  calculator->buttonFactorial = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonFactorial"));
  calculator->buttonLog = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonLog"));
  calculator->buttonCE = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonCE"));
  calculator->buttonC = GTK_BUTTON(gtk_builder_get_object (calcBuilder, "buttonC"));
  
  //connects signals
  gtk_builder_connect_signals (calcBuilder, calculator);

  //severs connection between builder objects and builder
  g_object_unref (G_OBJECT (calcBuilder));
  
  //connects signal for destruction with window_main  
  g_signal_connect(calculator->window_main, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  
  //connects clicked signal with the corresponding button handler.
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
  g_signal_connect(calculator->buttonSign, "clicked", G_CALLBACK(buttonSign_onclick), NULL);
  g_signal_connect(calculator->buttonPlus, "clicked", G_CALLBACK(buttonPlus_onclick), NULL);
  g_signal_connect(calculator->buttonMinus, "clicked", G_CALLBACK(buttonMinus_onclick), NULL);
  g_signal_connect(calculator->buttonMultiply, "clicked", G_CALLBACK(buttonMultiply_onclick), NULL);
  g_signal_connect(calculator->buttonDivide, "clicked", G_CALLBACK(buttonDivide_onclick), NULL);
  g_signal_connect(calculator->buttonPower, "clicked", G_CALLBACK(buttonPower_onclick), NULL);
  g_signal_connect(calculator->buttonFactorial, "clicked", G_CALLBACK(buttonFactorial_onclick), NULL);
  g_signal_connect(calculator->buttonLog, "clicked", G_CALLBACK(buttonLog_onclick), NULL);  g_signal_connect(calculator->buttonCE, "clicked", G_CALLBACK(buttonCE_onclick), NULL);
  g_signal_connect(calculator->buttonC, "clicked", G_CALLBACK(buttonC_onclick), NULL);
  
  //GDK test 
  g_signal_connect(calculator->window_main, "key-release-event", G_CALLBACK(key_event), NULL);
  
  //brings window into spotlight
  gtk_widget_show (calculator->window_main);                

  //main gtk loop
  gtk_main ();

  return 0;
}
