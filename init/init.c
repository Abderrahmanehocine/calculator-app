#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include "init.h"

char operation[MAX_READ_OPERATION];

void on_one_botton_click(GtkWidget* text_scan){
     strcpy(operation, gtk_entry_get_text(GTK_ENTRY(text_scan)));
     strcat(operation, "1");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

int main(int argc, char** argv){
     gtk_init(NULL,NULL);
     
     // the window
     GtkWidget* main_window;
     // the main box containe all the elements
     GtkWidget* main_box;
     // operation box:
     GtkWidget* text_box;
     GtkWidget* text_scan;
     GtkWidget* text_view;

     GtkWidget* first_row;
     // buttons of the first row:
     GtkWidget* seven_button;
     GtkWidget* eight_button;
     GtkWidget* nine_button;
     GtkWidget* delete_button;
     GtkWidget* clear_button;

     GtkWidget* second_row;
     // buttons of the second row:
     GtkWidget* four_button;
     GtkWidget* five_button;
     GtkWidget* six_button;
     GtkWidget* plus_button;
     GtkWidget* minus_button;

     GtkWidget* third_row;
     // buttons of the third row:
     GtkWidget* one_button;
     GtkWidget* two_button;
     GtkWidget* three_button;
     GtkWidget* multiple_button;
     GtkWidget* divide_button;

     GtkWidget* fourth_row;
     // buttons of the fourth_row:
     GtkWidget* dot_button;
     GtkWidget* zero_button;
     GtkWidget* neg_pos_button;
     GtkWidget* equal_button;

     GtkBuilder* file = gtk_builder_new_from_file("init/calc.ui");

     main_window =     GTK_WIDGET(gtk_builder_get_object(file,"main_window"));
     main_box =        GTK_WIDGET(gtk_builder_get_object(file,"main_box"));
     text_box =        GTK_WIDGET(gtk_builder_get_object(file,"text_box"));
     text_scan =       GTK_WIDGET(gtk_builder_get_object(file,"text_scan"));
     text_view =       GTK_WIDGET(gtk_builder_get_object(file,"text_view"));
     first_row =       GTK_WIDGET(gtk_builder_get_object(file,"first_row"));
     seven_button =    GTK_WIDGET(gtk_builder_get_object(file,"seven_button"));
     eight_button =    GTK_WIDGET(gtk_builder_get_object(file,"eight_button"));
     nine_button =     GTK_WIDGET(gtk_builder_get_object(file,"nine_button"));
     delete_button =   GTK_WIDGET(gtk_builder_get_object(file,"delete_button"));
     clear_button =    GTK_WIDGET(gtk_builder_get_object(file,"clear_button"));
     second_row =      GTK_WIDGET(gtk_builder_get_object(file,"second_row"));
     four_button =     GTK_WIDGET(gtk_builder_get_object(file,"four_button"));
     five_button =     GTK_WIDGET(gtk_builder_get_object(file,"five_button"));
     six_button =      GTK_WIDGET(gtk_builder_get_object(file,"six_button"));
     plus_button =     GTK_WIDGET(gtk_builder_get_object(file,"plus_button"));
     minus_button =    GTK_WIDGET(gtk_builder_get_object(file,"minus_button"));
     third_row =       GTK_WIDGET(gtk_builder_get_object(file,"third_row"));
     one_button =      GTK_WIDGET(gtk_builder_get_object(file,"one_button"));
     two_button =      GTK_WIDGET(gtk_builder_get_object(file,"two_button"));
     three_button =    GTK_WIDGET(gtk_builder_get_object(file,"three_button"));
     multiple_button = GTK_WIDGET(gtk_builder_get_object(file,"multiple_button"));
     divide_button =   GTK_WIDGET(gtk_builder_get_object(file,"divide_button"));
     fourth_row =      GTK_WIDGET(gtk_builder_get_object(file,"fourth_row"));
     dot_button =      GTK_WIDGET(gtk_builder_get_object(file,"dot_button"));
     zero_button =     GTK_WIDGET(gtk_builder_get_object(file,"zero_button"));
     neg_pos_button =  GTK_WIDGET(gtk_builder_get_object(file,"neg_pos_button"));
     equal_button =    GTK_WIDGET(gtk_builder_get_object(file,"equal_button"));
     g_signal_connect(main_window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
     
     g_signal_connect(one_button, "clicked", G_CALLBACK(on_one_botton_click),text_scan);

     gtk_builder_connect_signals(file,NULL);
     gtk_widget_show(main_window);
     gtk_main();
}
