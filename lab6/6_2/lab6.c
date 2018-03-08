#include<stdio.h>

int add (int *a,int *b);

void main(void)
{
	int var1, var2;
	int result;
	
	printf("please Enter value1 is : ");
	scanf("%d",&var1);
	printf("please Enter value2 is : ");
	scanf("%d",&var2);
	
	result = add(&var1,&var2);
	printf("the result is : %d",result);
}
int add (int *a, int *b)
{
	int z = *a + *b;
	return z;
}