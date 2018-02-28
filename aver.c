#include <stdio.h>

void main()
{       
    int x,number,sum=0;
	float avg;
	
	printf("Enter the 10 numbers\n");
	for (x=0; x<10; x++)
	{
		printf("Number-%d :",x);
		scanf("%d",&number);
		sum +=number;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is      : %f\n",sum,avg);
 
}