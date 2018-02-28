#include<stdio.h>

main()
{
	//the value of multiplication 
	int number;
	int factorial=1; 
	
	printf("Enter an integer : ");
	scanf("%d",&number);
	
	do {
		factorial *= number;
		number--;
	}while(number > 0);
	
	printf("Factorial = %d",factorial);
	
}