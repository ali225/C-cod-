#include<stdio.h>

main() 
{
	int x; 
	int y;
	int result;
	float dev; 
	
	printf("pleas enter number x : ");
	scanf("%d",&x);
	//printf("number x : %d",x);
	
	printf("pleas enter number y : ");
	scanf("%d",&y);
	//printf("number y : %d",y);
	
	result = x + y; 
	printf("result add = %d\n",result);
	
	result = x - y ;
	printf("result sub = %d\n",result);
	
	result = x * y;
	printf("result Mltiplication = %d\n",result);
	
	dev = (float)x / y;   				//type casting 
	printf("dev = %f\n",dev);
	
	result = (int)x % (int)y;
	printf("result %d", result);
	
}