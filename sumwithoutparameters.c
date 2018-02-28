#include<stdio.h>

void add(int x , int y);	//function prototype

main()
{
	add(3,4);
}
void add(int x , int y)
{	
	int sum = x	+ y;	// the sum operation 
	printf("the sum :%d",sum);
}