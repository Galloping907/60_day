#include<stdio.h>
#define size 3
int arr [size];
int rear = 0;
int front = 0;

void queue_en (int value){
    if (rear<size){
        arr[rear]=value;
        rear++;
    }else{
        printf("Queue is full\n");
    }
}

void queue_de(){
    if (front<rear){
        printf("Dequeued value is %d\n",arr[front]);
        front++;
    }else{
        printf("Queue is empty\n");
    }
}

int main(){
    queue_en(10);
    queue_en(20);
    queue_de();
    queue_de();
    return 0;
}