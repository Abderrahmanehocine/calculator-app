#include "oper.h"

static char operations[MAX_OPER];
static int front = -1;
static int rear  = -1;

bool operations_isEmpty(){
	return (front == -1 && rear == -1); 
}

bool operations_isFull(){
	return (rear+1)%MAX_OPER == front ? true : false;
}

void enqueue_operation(char button_clicked){
    if(operations_isFull()) 
        return;
	if (operations_isEmpty()){ 
		front = rear = 0; 
	}
	else{
		rear = (rear+1)%MAX_OPER;
	}
	operations[rear] = button_clicked;
}

void dequeue_operation(){
	if(operations_isEmpty())
		return;
	else if(front == rear ) {
		rear = front = -1;
	}
	else{
		front = (front+1)%MAX_OPER;
	}
}

char front_operation(){
	if(front == -1){
	 return '\0'; 
	}
	return operations[front];
}

char rear_operation(){
    if(rear == -1 ){
        return '\0';
    }
    return operations[rear];
}