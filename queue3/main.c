#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue s1, s2;
	//struct stack stacks[10];
	//s1.tos = 0;
	//s2.tos = 0;
	initQueue(&s1);
	initQueue(&s2);
	
	push(&s1, 100);
	push(&s1, 200);
	
	printf("s1 1st pop() : %d\n", pop(&s1));
	
	push(&s1, 300);
	
	printf("s1 2nd pop() : %d\n", pop(&s1));
	printf("s1 3st pop() : %d\n", pop(&s1));
	
	//pop(&s1);

	push(&s2, 900);
	push(&s2, 800);
	
	printf("s2 1st pop() : %d\n", pop(&s2));
	
	push(&s2, 700);
	
	printf("s2 2nd pop() : %d\n", pop(&s2));
	printf("s2 3st pop() : %d\n", pop(&s2));
	
	return 0;
}
