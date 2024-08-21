#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initQueue(Queue *ps, int size)
{
	ps->pArr = malloc(sizeof(int) * size);

	assert(ps->pArr);

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

	//assert(ps->rear != ps->size);
	assert((ps->rear + 1) %ps->size != ps->front);
		
	ps->pArr[ps->rear] = data;
	//++ps->rear;
	ps->rear = (ps->rear +1) % ps->size;
}

int pop(Queue *ps)
{
	int i = ps->front;
	//++ps->front;
	ps->front = (ps->front +1) %ps->size;
	return ps->pArr[i];
}
