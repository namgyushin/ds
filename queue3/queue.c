#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

void initQueue(Queue *ps)
{
	ps->rear = 0;
	ps->front = 0;
}

void push(Queue *ps, int data)
{
	if (ps->rear == QUEUESIZE)
	{
		fprintf(stdout, "queue isfull\n");
		exit(1);
	}
	
	ps->array[ps->rear] = data;
	++ps->rear;
}

int pop(Queue *ps)
{
	if (ps->front == QUEUESIZE)
		{
			fprintf(stdout, "stack is empty\n");
			exit(2);
		}	


	return ps->array[ps->front++];
}
