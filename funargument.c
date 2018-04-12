#include<stdio.h>

void Increment(int *p)
{
	*p = (*p) + 1;
	//printf("Address of varible a in increment = %d \n",&a);
}
int main()
{
	int a; 
	a = 10;
	Increment(&a);
	//printf("Address of varible a in main = %d \n",&a);

	printf("a = %d",a);
}