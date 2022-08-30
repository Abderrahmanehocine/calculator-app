#include "nums.h"

static float numbers[MAX_SIZE];
static int front = -1;
static int rear  = -1;

bool numbers_isEmpty(){
	return (front == -1 && rear == -1); 
}

bool numbers_isFull(){
	return (rear+1) % MAX_SIZE == front ? true : false;
}

void enqueue_number(int button_clicked){
    if(numbers_isFull() || rear == MAX_SIZE) 
        return;
	if(numbers_isEmpty()){
		rear = front = 0;
	}
	else{
		rear++;
	}
	numbers[rear] = button_clicked;
}

void add_update_number(int button_clicked){
    if(rear == -1 || numbers[rear] >= MAX_NUM)
        return;
    numbers[rear] = (numbers[rear] * 10) + button_clicked;
}

void delete_update_number(){
	int num = numbers[rear];
	num = num / 10;
	numbers[rear] = num;
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

void dequeue_all(){
	int f = front, r = rear;
	while(f > r){
		dequeue_number();
		f++;
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