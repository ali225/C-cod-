#include <stdio.h>

void main()
{
	int sum;
	
	int factorial=1;

	printf("Enter an integer : ");
	scanf("%d",&sum);
	
	do 
	{
		factorial *= sum;
		sum --;
	}while(sum > 0);
	
		printf("factorial = %d",factorial);
	

}