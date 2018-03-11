#include <stdio.h>

void increment()
{
	static int x;
	x = 0;
	x++;
	printf("the x %d \n",x);
}


int main (void)
{
	increment();
	increment();
	increment();
	increment();
	increment();

}