#define STACKSIZE 100

int stack[STACKSIZE];
int tos;					//top of stack


void push(int data)		//func. definition
{
	stack[tos] = data;
	++tos;
}

int pop(void)
{
	--tos;
	
	return stack[tos];
}
