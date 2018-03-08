#include<stdio.h>

void main(void)
{
	int x =10;
	int *ptr = &x;
	
	printf("x before change is : %d \n",x);
	*ptr = 20;
	printf("x After change is : %d",x);
}