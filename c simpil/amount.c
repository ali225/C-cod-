#include<stdio.h>


int main(void){
	
	int amount , bill_of_20 ,bill_of_10,
		bill_of_5, bill_of_1;
		
	printf("Enter amount of money:");
	scanf("%d",&amount);
	
	bill_of_20 = amount / 20;
	amount %= 20;
	
	bill_of_10 = amount / 10;
	amount %= 10;
	
	bill_of_5 = amount / 5;
	amount %= 5;
	
	bill_of_1 = amount;
	
	printf("20 L.E bills = %d\n10 L.E bills = %d\n5 l.E bills = %d\n1 L.E bills = %d\n",
			bill_of_20,bill_of_10,bill_of_5,bill_of_1);
			
	return 0;
}