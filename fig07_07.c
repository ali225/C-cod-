#include<stdio.h>

int cubeByValue(int *nPtr); // prototype

int main(void)
{
	int number = 5; // initialize number 
	
	printf("The original value of number is %d", number);
	
	// pass address of number to cubeByReference 
	cubeByValue(&number);
	printf("\nThe new value of number is %d\n", number);
	
}

int cubeByValue(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr; // local variable n and return result 
}