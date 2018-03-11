#include <stdio.h>

void add(int x , int y)
{
	int result = x + y;
	printf("result = %d\n",result );
}
void printMyName(void)
{
	int a;
	char b[255];
	
	printf("plesae enter your name : ");
	gets(b);
	
	printf("plesae enter number of :");
	scanf("%d",&a);
	
	
	printf("your Name :%s \n",b);
	printf("number : %d  \n",a);
}