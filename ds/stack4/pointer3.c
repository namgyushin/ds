#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
	int *p;
	
	p = &a;
	
	printf("*p: %x\n", *p);
	return 0;
}
