#include <stdio.h>

void main()
{     
    int i,sum,avg,numbers;
	
	printf("Enter the 10 numbers :\n");
	for (i=1;i<=10;i++)
	{      
		printf("Number - %d :",i);
		scanf("%d",&numbers);
		sum=+numbers;
		
	}
	avg = sum/10;
	printf("the sum of 10 no is : %d \n the Averge is : %d",sum,avg);
}
