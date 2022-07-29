#ifndef INIT_INIT_H
#define INIT_INIT_H

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <gtk/gtk.h>
#include "../queue/queue.h"
#include "../operation/operation.h"
#include "../operation/check.h"

#define MAX_READ_OPERATION 1024
 
typedef struct calc{
   GtkWidget* main_window;
   GtkWidget* main_box;
   GtkWidget* text_box;
   GtkWidget* text_scan;
   GtkWidget* text_view;
   GtkWidget* first_row;
   GtkWidget* seven_button;
   GtkWidget* eight_button;
   GtkWidget* nine_button;
   GtkWidget* delete_button;
   GtkWidget* clear_button;
   GtkWidget* second_row;
   GtkWidget* four_button;
   GtkWidget* five_button;
   GtkWidget* six_button;
   GtkWidget* plus_button;
   GtkWidget* minus_button;
   GtkWidget* third_row;
   GtkWidget* one_button;
   GtkWidget* two_button;
   GtkWidget* three_button;
   GtkWidget* multiple_button;
   GtkWidget* divide_button;
   GtkWidget* fourth_row;
   GtkWidget* dot_button;
   GtkWidget* zero_button;
   GtkWidget* neg_pos_button;
   GtkWidget* equal_button;
   GtkTextBuffer* text_buffer;
}calc;

void on_zero_button_click();
void on_one_button_click();
void on_two_button_click();
void on_three_button_click();
void on_four_button_click();
void on_five_button_click();
void on_six_button_click();
void on_seven_button_click();
void on_eight_button_click();
void on_nine_button_click();

#endif