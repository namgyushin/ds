#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
		a = b;
		b = temp;
}

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	printf("a: %d\tb: %d\n", a, b);
	
	//swap(a,b);
	swap(&a, &b);
	
	
	printf("a: %d\tb: %d\n", a, b);
	return 0;
}
