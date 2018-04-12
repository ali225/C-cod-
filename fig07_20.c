#include <stdio.h>

int main()
{
	int x = 5; 
	int *p = &x;
	*p = 6; // change value used pointer 
	int **q = &p;
	int ***y = &q;
	
	printf("%d \n",*p); // 6
	printf("%d \n",*q); // addees 
	printf("%d \n",*(*q)); // 6
	printf("%d \n",*(*y));	// address
	printf("%d \n",*(*(*y))); // 6
	
	***y = 10;
	printf("x = %d \n",x);


	
}