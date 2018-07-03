#include <stdio.h>

int main(void)
{
	int x = 20;
	int *p = &x;
	
	printf("%d\n",x);
	printf("%d\n",&p);
	
	return 0;

}