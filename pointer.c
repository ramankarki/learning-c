#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int a = 1;
	int b = 2;
	printf("before swap: a = %i, b = %i\n", a, b);
	swap(&a, &b);
	printf("after swap: a = %i, b = %i\n", a, b);
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}