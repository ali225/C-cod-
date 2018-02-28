#include<stdio.h>

void print_separator()
{	
	int i;
	
	for(i=0; i <= 50; i++)
	{
		printf("#");
	}
	printf("\n");
	for(i=0; i <= 50; i++)
	{
		printf("*");
	}
}

main()
{
	print_separator();
	printf("\n\n \t Wecome to uor program\n\n");
	print_separator();
	printf("\n\n \t program coure is so boring \n\n");
	print_separator();
	printf("\n\n \t i'll go to sleep , goodbye\n\n");
	print_separator();

}