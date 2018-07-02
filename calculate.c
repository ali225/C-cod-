#include<stdio.h>

int main(void)
{
	printf("Enter three integers : ");
	
	int x ,y, z;//declare variables 
	
	scanf("%d%d%d",&x,&y,&z); // resd therr function 
	
	int result = x * y * z;
	printf("the product is %d\n",result);
}