#include "init.h"

// Global variables:

static char operation[MAX_READ_OPERATION];

void on_zero_button_click(GtkWidget* text_scan, gpointer data){
     if(strlen(operation) == 0) 
          return;
     if(get_new_number()){
          enqueue_number(0);
          set_new_number("false");
     }
     else{
          add_update_number(0);
     }
     strcat(operation,"0");
     text_scan = data;
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_one_button_click(GtkWidget* text_scan, gpointer data){
     if(get_new_number()){
          enqueue_number(1);
          set_new_number("false");
     }
     else {
          add_update_number(1);
     }
     strcat(operation,"1");
     text_scan = data;
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_two_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(2);
          set_new_number("false");
     }
     else {
          add_update_number(2);
     }
     strcat(operation,"2");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_three_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(3);
          set_new_number("false");
     }
     else {
          add_update_number(3);
     }
     strcat(operation,"3");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_four_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(4);
          set_new_number("false");
     }
     else {
          add_update_number(4);
     }
     strcat(operation,"4");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_five_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(5);
          set_new_number("false");
     }
     else {
          add_update_number(5);
     }
     strcat(operation,"5");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_six_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(6);
          set_new_number("false");
     }
     else {
          add_update_number(6);
     }
     strcat(operation,"6");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_seven_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(7);
          set_new_number("false");
     }
     else {
          add_update_number(7);
     }
     strcat(operation,"7");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_eight_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(get_new_number()){
          enqueue_number(8);
          set_new_number("false");
     }
     else {
          add_update_number(8);
     }
     strcat(operation,"8");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
}

void on_nine_button_click(GtkWidget* entry, gpointer data){
     entry = data;
     if(get_new_number()){
          enqueue_number(9);
          set_new_number("false");
     }
     else {
          add_update_number(9);
     }
     strcat(operation,"9");
     gtk_entry_set_text(GTK_ENTRY(entry), operation);
     set_new_operation("false");
}

void on_delete_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     operation[strlen(operation)-1] = '\0';
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     if(check_last_char(operation)){
          set_new_operation("true");
     }
     else{
          set_new_operation("false");
          delete_update_number();
     }
}

void on_clear_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     operation[0] = '\0';
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("false");
     dequeue_all();
}

void on_dot_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(strlen(operation) == 0){
          strcat(operation,"0.");
     }
     else{
          strcat(operation,".");
     }
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
}

void on_plus_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(strlen(operation) == 0 || get_new_operation()){
          return;
     }
     enqueue_operation('+');
     strcat(operation,"+");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("true");
     set_new_number("true");
}

void on_minus_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(strlen(operation) == 0 || get_new_operation()){
          return;
     }
     enqueue_operation('-');
     strcat(operation,"-");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("true");
}

void on_multiple_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(strlen(operation) == 0 || get_new_operation()){
          return;
     }
     enqueue_operation('*');
     strcat(operation,"x");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("true");
}

void on_divide_button_click(GtkWidget* text_scan, gpointer data){
     text_scan = data;
     if(strlen(operation) == 0 || get_new_operation()){
          return;
     }
     enqueue_operation('/');
     set_new_number("true");
     strcat(operation,"÷");
     gtk_entry_set_text(GTK_ENTRY(text_scan), operation);
     set_new_operation("true");
}

void on_equal_button_click(GtkWidget* text_scan, gpointer data){
     printf("Function called\n");
     printf("%f\n%f\n",front_number(), rear_number());
     printf("%c\n%c\n",front_operation(),rear_operation());
     printf("%d\n",number_of_numbers());
}

void on_changed_text(GtkTextBuffer* text_buffer, gpointer data){
     text_buffer = data;
  // set the result of the operation here 
  /*gtk_text_buffer_set_text(text_buffer, "123456789", 5);*/
  //Print();
}

int main(int argc, char** argv){
     gtk_init(&argc,&argv);

     calc widget;

     GtkBuilder* file = gtk_builder_new_from_file("ui/calc.xml");

     widget.main_window   = GTK_WIDGET(gtk_builder_get_object(file,"main_window"));
     g_signal_connect(widget.main_window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    
     widget.main_box        = GTK_WIDGET(gtk_builder_get_object(file,"main_box"));
     widget.text_box        = GTK_WIDGET(gtk_builder_get_object(file,"text_box"));
     widget.first_row       = GTK_WIDGET(gtk_builder_get_object(file,"first_row"));
     widget.second_row      = GTK_WIDGET(gtk_builder_get_object(file,"second_row"));
     widget.third_row       = GTK_WIDGET(gtk_builder_get_object(file,"third_row"));
     widget.fourth_row      = GTK_WIDGET(gtk_builder_get_object(file,"fourth_row"));

     widget.text_scan       = GTK_WIDGET(gtk_builder_get_object(file,"text_scan"));
     g_signal_connect(GTK_EDITABLE(widget.text_scan), "changed", G_CALLBACK(on_changed_text),widget.text_buffer);

     widget.text_view       = GTK_WIDGET(gtk_builder_get_object(file,"text_view")); 

     widget.delete_button = GTK_WIDGET(gtk_builder_get_object(file,"delete_button"));
     g_signal_connect(widget.delete_button, "clicked", G_CALLBACK(on_delete_button_click),widget.text_scan);

     widget.clear_button  = GTK_WIDGET(gtk_builder_get_object(file,"clear_button"));
     g_signal_connect(widget.clear_button, "clicked", G_CALLBACK(on_clear_button_click),widget.text_scan);

     widget.plus_button   = GTK_WIDGET(gtk_builder_get_object(file,"plus_button"));
     g_signal_connect(widget.plus_button, "clicked", G_CALLBACK(on_plus_button_click),widget.text_scan);

     widget.minus_button  = GTK_WIDGET(gtk_builder_get_object(file,"minus_button"));
     g_signal_connect(widget.minus_button, "clicked", G_CALLBACK(on_minus_button_click),widget.text_scan);

     widget.multiple_button = GTK_WIDGET(gtk_builder_get_object(file,"multiple_button"));
     g_signal_connect(widget.multiple_button, "clicked", G_CALLBACK(on_multiple_button_click),widget.text_scan);

     widget.divide_button   = GTK_WIDGET(gtk_builder_get_object(file,"divide_button"));
     g_signal_connect(widget.divide_button, "clicked", G_CALLBACK(on_divide_button_click),widget.text_scan);

     widget.zero_button   = GTK_WIDGET(gtk_builder_get_object(file,"zero_button"));
     g_signal_connect(widget.zero_button, "clicked", G_CALLBACK(on_zero_button_click),widget.text_scan);

     widget.one_button    = GTK_WIDGET(gtk_builder_get_object(file,"one_button"));
     g_signal_connect(widget.one_button, "clicked", G_CALLBACK(on_one_button_click),widget.text_scan);

     widget.two_button    = GTK_WIDGET(gtk_builder_get_object(file,"two_button"));
     g_signal_connect(widget.two_button, "clicked", G_CALLBACK(on_two_button_click),widget.text_scan);

     widget.three_button  = GTK_WIDGET(gtk_builder_get_object(file,"three_button"));
     g_signal_connect(widget.three_button, "clicked", G_CALLBACK(on_three_button_click),widget.text_scan);

     widget.four_button   = GTK_WIDGET(gtk_builder_get_object(file,"four_button"));
     g_signal_connect(widget.four_button, "clicked", G_CALLBACK(on_four_button_click),widget.text_scan);

     widget.five_button   = GTK_WIDGET(gtk_builder_get_object(file,"five_button"));
     g_signal_connect(widget.five_button, "clicked", G_CALLBACK(on_five_button_click),widget.text_scan);

     widget.six_button    = GTK_WIDGET(gtk_builder_get_object(file,"six_button"));
     g_signal_connect(widget.six_button, "clicked", G_CALLBACK(on_six_button_click),widget.text_scan);

     widget.seven_button  = GTK_WIDGET(gtk_builder_get_object(file,"seven_button"));
     g_signal_connect(widget.seven_button, "clicked", G_CALLBACK(on_seven_button_click),widget.text_scan);

     widget.eight_button  = GTK_WIDGET(gtk_builder_get_object(file,"eight_button"));
     g_signal_connect(widget.eight_button, "clicked", G_CALLBACK(on_eight_button_click),widget.text_scan);

     widget.nine_button   = GTK_WIDGET(gtk_builder_get_object(file,"nine_button"));
     g_signal_connect(widget.nine_button, "clicked", G_CALLBACK(on_nine_button_click),widget.text_scan);

     widget.dot_button      = GTK_WIDGET(gtk_builder_get_object(file,"dot_button"));
     g_signal_connect(widget.dot_button, "clicked", G_CALLBACK(on_dot_button_click),widget.text_scan);


     widget.neg_pos_button  = GTK_WIDGET(gtk_builder_get_object(file,"neg_pos_button"));

     widget.equal_button    = GTK_WIDGET(gtk_builder_get_object(file,"equal_button"));
     g_signal_connect(widget.equal_button, "clicked", G_CALLBACK(on_equal_button_click),NULL);

     widget.text_buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(widget.text_view));

     gtk_widget_show(widget.main_window);

     gtk_main();
     // window program distroyed

     // close the program
     return 0;
}
