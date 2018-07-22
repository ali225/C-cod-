#include<stdio.h>

int x = 4;
int y = 5;
int swap();

void main(void){
	printf("%d",x);
	printf("%d",y);
	
	
	swap();
	
	printf("%d",x);
	printf("%d",y);
	
}


int swap(){

	int temp;
	
	temp = x;
	x = y ;
	y = temp;

}