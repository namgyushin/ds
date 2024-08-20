#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initQueue(Queue *ps, int size)
{
	ps->pArr = malloc(sizeof(int) * size);
	ps->size = size;
	ps->rear = 0;
	ps->front = 0;
}

void cleanupQueue(Queue *ps)
{
	free(ps->pArr);
}

void push(Queue *ps, int data)
{
/*	if (ps->rear == QUEUESIZE)
	{
		fprintf(stdout, "queue isfull\n");
		exit(1);
	}
*/
	assert(ps->rear != ps->size);
		
	ps->pArr[ps->rear] = data;
	++ps->rear;
}

int pop(Queue *ps)
{
/*	if (ps->front == QUEUESIZE)
		{
			fprintf(stdout, "stack is empty\n");
			exit(2);
		}	
*/
	assert(ps->front != ps->size);
	return ps->pArr[ps->front++];
}
