#include "nums.h"

static double numbers[MAX_SIZE];
static int front = -1;
static int rear  = -1;

bool numbers_isEmpty(){
	return (front == -1 && rear == -1); 
}

bool numbers_isFull(){
	return (rear+1)%MAX_SIZE == front ? true : false;
}

void enqueue_number(double button_clicked){
    if(numbers_isFull()) 
        return;
	if (numbers_isEmpty()){ 
		front = rear = 0; 
	}
	else{
		rear = (rear+1)%MAX_SIZE;
	}
	numbers[rear] = button_clicked;
}

void update_number(int button_clicked){
    if(rear == -1 || numbers[rear] == DBL_MAX)
        return;
    numbers[rear] = (numbers[rear] * 10) + button_clicked;
}

void dequeue_number(){
	if(numbers_isEmpty())
		return;
	else if(front == rear ) {
		rear = front = -1;
	}
	else{
		front = (front+1)%MAX_SIZE;
	}
}

float front_number(){
	if(front == -1){
	 return 1<<30; 
	}
	return numbers[front];
}

float rear_number(){
    if(rear == -1 ){
        return 1<<30;
    }
    return numbers[rear];
}