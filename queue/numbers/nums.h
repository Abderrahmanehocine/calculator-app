#ifndef QUEUE_NUMBERS_NUM_H
#define QUEUE_NUMBERS_NUM_H

#pragma once
#pragma pack (1)

#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include "../../operation/check.h"

#define MAX_SIZE 15 
#define MAX_NUM 99999999

//check if the queue of is empty or not
bool numbers_isEmpty();

// check if the queue is full or not
bool numbers_isFull();

// enqueue or add new number in the queue of numbers
void enqueue_number(int button_clicked);

// update the rear number of the queue
void add_update_number(int button_clicked);

void delete_update_number();

// dequeue or delete the front number of the queue
void dequeue_number();

void dequeue_all();

// return the front number of the queue
float front_number();

// return the rear number of the queue
float rear_number();

// print all the numbers in the queue
void Print();

#endif