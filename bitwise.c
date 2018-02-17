#include<stdio.h>

main()
{
	char x = 5;
	char y = 3;
	char z =x|y; 
	printf("z = %d\n",z);
	
	z =x^y; 
	printf("z = %d\n",z);
	
	z =x&y; 
	printf("z = %d\n",z);
}