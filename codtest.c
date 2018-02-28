#include<stdio.h>
void print_separator(); // function prototype 

int main()
{
	

	print_separator();
	printf("\n\n \t Wecome to uor program\n\n");
	print_separator();
	printf("\n\n \t program coure is so boring \n\n");
	print_separator();
	printf("\n\n \t i'll go to sleep , goodbye\n\n");
	print_separator();
}

void print_separator()
	{	int hash=1,star=1;

	while (hash <= 50){ 
	printf("#",hash);
	hash++;}

	printf("\n");
	while (star <= 50){ 
	printf("*",star);
	star++;}
	}