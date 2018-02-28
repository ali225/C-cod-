#include<stdio.h>

int add(int x , int y);	//function prototype

main()
{
	int Ali;
	Ali = add(3,4);
	printf("the sum :%d",Ali);
}

int add(int x, int y)
{	
	int sum = x	+ y;	// the sum operation 
	return sum;
}