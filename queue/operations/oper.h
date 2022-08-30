#ifndef QUEUE_OPERATIONS_OPER_H
#define QUEUE_OPERATIONS_OPER_H

#pragma once

#define MAX_OPER 10

#include <stdbool.h>

bool operations_isEmpty();
bool operations_isFull();
void enqueue_operation(char button_clicked);
void dequeue_operation();
char front_operation();
char rear_operation();
int number_of_numbers();
#endif