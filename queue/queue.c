#include "queue.h"

static queue* front = NULL;
static queue* rear  = NULL;

bool isEmpty(){
    return (front == NULL && rear == NULL)? true : false;
}

void enqueue(float new_num){
    queue* temp = (queue*)malloc(sizeof(queue));
    temp->number = new_num;
    temp->operation = '\0';
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void update(int button){
    queue* temp = rear;
    if(temp == NULL) return;
    temp->number = ((temp->number)*10) + button;
}

void dequeue(){
    queue* temp = front;
    if(front == NULL) return;
    front = front->next;
    free(temp);
}


void clear(){
    while(isEmpty()){
        dequeue();
    }
}

float Front(){
    queue* temp = front;
    if(temp == NULL) return 0;
    return temp->number;
}

float Rear(){
    queue* temp = rear;
    if(temp == NULL) return 0;
    return temp->number;
}

void Print(){
    if(front == NULL){
        printf("There is not number in the queue\n");
        return;
    }
    queue* temp = front;
    while(temp == NULL){
        printf("%.2f\n", temp->number);
        temp = temp->next;
    }
}

void set_operation(char operation){
    queue* temp = rear;
    temp->operation = operation;
    return;
}