#include<stdio.h>

main()
{
	//the value of multiplication 
	int number,i=1; 
	int mul;
	
	printf("Enter the number display it's multiplication table :");
	scanf("%d",&number);
	
	while(i <= number)
	{
		mul = number * i;
		printf("%d X %d = %d \n",number,i,mul);
		++i;
	}
	
	/*for(i=1 ; i <= number; i++)
	{
		mul = number * i;
		printf("%d X %d = %d \n",number,i,mul);
	}
	*/
}