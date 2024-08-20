#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void initStack(Stack *ps)
{
	ps->tos = 0;
}

void push(Stack *ps, int data)
{
	//stack[tos] = data;
	//++tos;
	
	//s.array[s.tos] = data;
	//++s.tos;
	
	if (ps->tos == STACKSIZE)
	{
		fprintf(stdout, "stack isfull\n");
		exit(1);
	}
	
	ps->array[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps)
{
	//--tos;
	//return stack[tos];
	
	//--s.tos;
	//return s.array[s.tos];
	
	if (os->tos == 0)
	{
		fprintf(stdout, "stack is empty\n");
		exit(2);
	}
	--ps->tos;
	return ps->array[ps->tos];
}

