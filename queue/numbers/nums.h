#ifndef QUEUE_NUMBERS_NUM_H
#define QUEUE_NUMBERS_NUM_H

#pragma once
#pragma pack (1)

#include <stdio.h>
#include <float.h>
#include <stdbool.h>

#define MAX_SIZE 15 

//check if the queue of is empty or not
bool numbers_isEmpty();

// check if the queue is full or not
bool numbers_isFull();

// enqueue or add new number in the queue of numbers
void enqueue_number(double button_clicked);

// update the rear number of the queue
void update_number(int button_clicked);

// dequeue or delete the front number of the queue
void dequeue_number();

// return the front number of the queue
float front_number();

// return the rear number of the queue
float rear_number();

// print all the numbers in the queue
void Print();

#endif