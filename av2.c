#include<stdio.h>

main()
{
	int i , numbers ,sum=0;
	float avg;
	
	for(i=1 ; i <= 10 ; i++)
	{
		scanf("%d",&numbers);
		sum+=numbers;
	}
	printf("sum = %d\n",sum);
	avg = sum/10.0;
	printf("average = %f",avg);
	
}