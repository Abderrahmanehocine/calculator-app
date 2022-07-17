#include "init.h"

// Global variables:
static GtkWidget* main_window;
static GtkWidget* main_box;
static GtkWidget* text_box;
static GtkWidget* text_scan;
static GtkWidget* text_view;
static GtkWidget* first_row;
static GtkWidget* seven_button;
static GtkWidget* eight_button;
static GtkWidget* nine_button;
static GtkWidget* delete_button;
static GtkWidget* clear_button;
static GtkWidget* second_row;
static GtkWidget* four_button;
static GtkWidget* five_button;
static GtkWidget* six_button;
static GtkWidget* plus_button;
static GtkWidget* minus_button;
static GtkWidget* third_row;
static GtkWidget* one_button;
static GtkWidget* two_button;
static GtkWidget* three_button;
static GtkWidget* multiple_button;
static GtkWidget* divide_button;
static GtkWidget* fourth_row;
static GtkWidget* dot_button;
static GtkWidget* zero_button;
static GtkWidget* neg_pos_button;
static GtkWidget* equal_button;

static char operation[MAX_READ_OPERATION];
static int number_of_operations = 0;
void on_zero_button_click(){
     if(strlen(operation) == 0) return;
     strcat(operation,"0");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_one_button_click(){
     strcat(operation,"1");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_two_button_click(){
     strcat(operation,"2");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_three_button_click(){
     strcat(operation,"3");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_four_button_click(){
     strcat(operation,"4");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_five_button_click(){
     strcat(operation,"5");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_six_button_click(){
     strcat(operation,"6");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_seven_button_click(){
     strcat(operation,"7");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_eight_button_click(){
     strcat(operation,"8");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_nine_button_click(){
     strcat(operation,"9");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_delete_button_click(){
     operation[strlen(operation)-1] = '\0';
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_clear_button_click(){
     operation[0] = '\0';
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_dot_button_click(){
     if(strlen(operation) == 0){
          strcat(operation,"0.");
     }
     else{
          strcat(operation,".");
     }
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_plus_button_click(){
     if(strlen(operation) == 0){
          return;
     }
     number_of_operations++;
     strcat(operation,"+");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_minus_button_click(){
     if(strlen(operation) == 0){
          return;
     }
     number_of_operations++;
     strcat(operation,"-");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_multiple_button_click(){
     if(strlen(operation) == 0){
          return;
     }
     number_of_operations++;
     strcat(operation,"x");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_divide_button_click(){
     if(strlen(operation) == 0){
          return;
     }
     number_of_operations++;
     strcat(operation,"÷");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

int main(int argc, char** argv){
     gtk_init(&argc,&argv);

     GtkBuilder* file = gtk_builder_new_from_file("init/calc.xml");

     main_window   = GTK_WIDGET(gtk_builder_get_object(file,"main_window"));
     g_signal_connect(main_window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    
     main_box        = GTK_WIDGET(gtk_builder_get_object(file,"main_box"));
     text_box        = GTK_WIDGET(gtk_builder_get_object(file,"text_box"));
     text_scan       = GTK_WIDGET(gtk_builder_get_object(file,"text_scan"));
     text_view       = GTK_WIDGET(gtk_builder_get_object(file,"text_view"));
     first_row       = GTK_WIDGET(gtk_builder_get_object(file,"first_row"));
     second_row      = GTK_WIDGET(gtk_builder_get_object(file,"second_row"));
     third_row       = GTK_WIDGET(gtk_builder_get_object(file,"third_row"));
     fourth_row      = GTK_WIDGET(gtk_builder_get_object(file,"fourth_row"));

     delete_button = GTK_WIDGET(gtk_builder_get_object(file,"delete_button"));
     g_signal_connect(delete_button, "clicked", G_CALLBACK(on_delete_button_click),NULL);

     clear_button  = GTK_WIDGET(gtk_builder_get_object(file,"clear_button"));
     g_signal_connect(clear_button, "clicked", G_CALLBACK(on_clear_button_click),NULL);

     plus_button   = GTK_WIDGET(gtk_builder_get_object(file,"plus_button"));
     g_signal_connect(plus_button, "clicked", G_CALLBACK(on_plus_button_click),NULL);

     minus_button  = GTK_WIDGET(gtk_builder_get_object(file,"minus_button"));
     g_signal_connect(minus_button, "clicked", G_CALLBACK(on_minus_button_click),NULL);

     multiple_button = GTK_WIDGET(gtk_builder_get_object(file,"multiple_button"));
     g_signal_connect(multiple_button, "clicked", G_CALLBACK(on_multiple_button_click),NULL);

     divide_button   = GTK_WIDGET(gtk_builder_get_object(file,"divide_button"));
     g_signal_connect(divide_button, "clicked", G_CALLBACK(on_divide_button_click),NULL);

     zero_button   = GTK_WIDGET(gtk_builder_get_object(file,"zero_button"));
     g_signal_connect(zero_button, "clicked", G_CALLBACK(on_zero_button_click),NULL);

     one_button    = GTK_WIDGET(gtk_builder_get_object(file,"one_button"));
     g_signal_connect(one_button, "clicked", G_CALLBACK(on_one_button_click),NULL);

     two_button    = GTK_WIDGET(gtk_builder_get_object(file,"two_button"));
     g_signal_connect(two_button, "clicked", G_CALLBACK(on_two_button_click),NULL);

     three_button  = GTK_WIDGET(gtk_builder_get_object(file,"three_button"));
     g_signal_connect(three_button, "clicked", G_CALLBACK(on_three_button_click),NULL);

     four_button   = GTK_WIDGET(gtk_builder_get_object(file,"four_button"));
     g_signal_connect(four_button, "clicked", G_CALLBACK(on_four_button_click),NULL);

     five_button   = GTK_WIDGET(gtk_builder_get_object(file,"five_button"));
     g_signal_connect(five_button, "clicked", G_CALLBACK(on_five_button_click),NULL);

     six_button    = GTK_WIDGET(gtk_builder_get_object(file,"six_button"));
     g_signal_connect(six_button, "clicked", G_CALLBACK(on_six_button_click),NULL);

     seven_button  = GTK_WIDGET(gtk_builder_get_object(file,"seven_button"));
     g_signal_connect(seven_button, "clicked", G_CALLBACK(on_seven_button_click),NULL);

     eight_button  = GTK_WIDGET(gtk_builder_get_object(file,"eight_button"));
     g_signal_connect(eight_button, "clicked", G_CALLBACK(on_eight_button_click),NULL);

     nine_button   = GTK_WIDGET(gtk_builder_get_object(file,"nine_button"));
     g_signal_connect(nine_button, "clicked", G_CALLBACK(on_nine_button_click),NULL);

     dot_button      = GTK_WIDGET(gtk_builder_get_object(file,"dot_button"));
     g_signal_connect(dot_button, "clicked", G_CALLBACK(on_dot_button_click),NULL);


     neg_pos_button  = GTK_WIDGET(gtk_builder_get_object(file,"neg_pos_button"));
     equal_button    = GTK_WIDGET(gtk_builder_get_object(file,"equal_button"));

     //gtk_builder_connect_signals(file,NULL);
     gtk_widget_show(main_window);

     gtk_main();
     return 0;
}
