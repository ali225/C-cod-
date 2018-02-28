#include<stdio.h>

void add();	//function prototype

main()
{
	add();
}
void add()
{	int x , y;	//two value 
	int sum;	// the sum operation 
	
	printf("Enter number x: ");
	scanf("%d",&x);
	printf("Enter number y: ");
	scanf("%d",&y);
	sum = x	+ y;
	printf("the sum :%d",sum);
}
