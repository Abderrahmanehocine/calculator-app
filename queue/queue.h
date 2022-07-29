#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#pragma once

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct queue{
    float number;
    char operation;
    struct queue* next;
}queue;


bool isEmpty();
void enqueue(float new_num);
void update(int button);
void dequeue();
void clear();
float Front();
float Rear();
void Print();
//void set_operation(char operation);

#endif