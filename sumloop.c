#include<stdio.h>

int main()
{	int first=0;
	int second=0;
	int sum=0;
	//int x = 1;
	while(1){
	printf("please enter first number :");
	scanf("%d",&first);
	printf("please enter second number :");
	scanf("%d",&second);
	
	sum = first + second ; 
	printf("\nthe result is :%d\n",sum);
	}
}