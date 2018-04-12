#include<stdio.h>
#define SIZE 20 

size_t getSize(float *Ptr); // prototype

int main(void)
{ 
	float array[SIZE]; // Create array
	
	printf("The number of bytes in the array is %u"
	"\nThe number of bytes returned by getSize is %u\n",
	sizeof(array),getSize(array));
}
	// return size of Ptr 
	size_t getSize(float *Ptr)
	{
		return sizeof(Ptr);
	}