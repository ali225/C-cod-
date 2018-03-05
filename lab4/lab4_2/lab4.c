#include<stdio.h>

int x =10;
int y = 20;

void Swap_fun();

void main(void)
{
	printf("X before swap = %d\n",x);
	printf("Y before swap = %d\n\n\n",y);
	
	Swap_fun();
	
	printf("X After swap = %d\n",x);
	printf("Y After swap = %d\n\n\n",y);
}

void Swap_fun(void)
{
	int z = x;
	x = y ;
	y = z; 
	
}