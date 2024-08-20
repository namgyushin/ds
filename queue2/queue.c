#define STACKSIZE 100

static int queue[STACKSIZE];
static int front;
static int rear;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int i = front;
	++front;
	return queue[i];
}
