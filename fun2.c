#include <stdio.h>

int func_for();
int func_hash();

int main(void)
{	func_hash();
	func_for();
	
	printf("\n\n\t\t hi Ali \n\n");
	func_hash();
	func_for();
	printf("\n\n\t\t hi Ali \n\n");
	func_hash();
	func_hash();
	printf("\n\n\t\t hi Ali \n\n");
	return 0;
}

int func_for()
{
	for (int counter=1;counter <= 50;++counter){
	printf("*");
	}
	
}

int func_hash()
{
	for (int counter=1;counter <= 50;++counter){
	printf("#");
	}
	printf("\n");
}