#include <stdio.h>

int main(void){
	
	int x;
	
	printf("Enter a number from 1 to 3:");
	scanf("%d",&x);
	
	switch(x){
		
		case 1: printf("good morning"); break;
		case 2: printf("good afternoon"); break;
		case 3: printf("good night"); break;
		default:
			printf("not number that");
	}
	return 0;
}