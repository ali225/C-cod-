#include <stdio.h>
#define size 12

int main (void)
{

	int a[size] = {12,20,10,30,40};
	size_t i;
	int total =0;
	
	for(i=0;i<size;i++)
	{
	total -=a[i];
	}
	printf( "Total of array element values is %d\n", total );
}
