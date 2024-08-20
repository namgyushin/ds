#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100

typedef struct
{
	int array[QUEUESIZE];
	int rear;
	int front;
}Queue;

void initQueue(Queue *ps);
void push(Queue *ps, int data);		// func. declaration
int pop(Queue *ps);

#endif
