#include<stdio.h>

int Get_Max(int x,int y);

void main(void)
{
	int a,b,max;
	
	printf("please Enter value 1:");
	scanf("%d",&a);
	
	printf("please Enter value 2:");
	scanf("%d",&b);
	
	max = Get_Max(a,b);
	printf("the maximum value is %d ",max);
}

int Get_Max(int x, int y)
{
	int var;
	
	if (x > y)
	{
		var = x;
	}
	else
	{
		var = y;
	}
	
	return var;
}