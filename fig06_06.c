#include <stdio.h>
#define SIZE 12 // maximum size of array

int main(void)
{
	int s[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};
	size_t i;
	int total = 0;
	
	for(i=0;i<SIZE;++i)
	{
	total += s[i];
	}

	printf("Total of array element value is %d\n",total);

}