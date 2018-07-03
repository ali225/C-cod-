#include<stdio.h>

double fact(int num);

int main(void)
{
	int num;
	double f;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	f = fact(num);
	
	printf("factorial = %.2f",f);
	
	return 0;

}

double fact(int num){
	
	double res = 0;
	
	if (num == 0 || num == 1)
		res =1;
	else
		res = num * fact(num -1);
	
	return res;
}