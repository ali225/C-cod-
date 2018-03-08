#include <stdio.h>

int main(void)
{
	int n[10]= {32,27,64,18,95,24,90,70,79,37};
	size_t i;
	
	
	printf("%s%13s\n","Element","Value");
	
	for(i=0;i<10;i++)
	{
		printf("%7u%13d\n",i,n[i]);
	}
}