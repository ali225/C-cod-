#include <stdio.h>
#define SIZE 10 // maximum size of array

int main(void)
{
	int s[SIZE];
	size_t i;
	
	for(i=0;i<SIZE;++i)
	{
	s[i] = 2+2 *i;
	}

	printf("%s%13s\n","Element","Value");
	
	for(i=0;i<SIZE;++i)
	{
		printf("%7u%13d\n",i,s[i]);
	}

}