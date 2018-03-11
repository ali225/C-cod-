#include <stdio.h>

void main(void)
{
	int x ,y,z;
	
	//const int *ptr = &x;
	//ptr = &y;
	//int const *ptr = &x;
	int *const ptr = &x;
	*ptr = 20;
	
	printf("the const : %d",*ptr);
}