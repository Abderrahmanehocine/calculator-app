#ifndef OPERATION_CHECK_H
#define OPERATION_CHECK_H

#pragma once

#define DIVIDE ÷

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <float.h>

bool get_new_number();
void set_new_number(const char* true_or_false);
bool check_number(float num);
void set_new_operation(const char* true_or_false);
bool get_new_operation();
bool check_last_char(const char* op);

#endif