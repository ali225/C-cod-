#include<stdio.h>


int main()
{
	float num1, num2, res;
	
	char op;
	
	printf("Enter the arithmetic equation \n ");
	scanf("%f %c %f ", &num1 , &op ,&num2);
	
	if (op == '+')
		res = num1 + num2;
	else if (op == '-')
		res = num1 - num2;
	else if (op == '*')
		res = num1 * num2;
	else if(op == '/')
		res = num1 / num2;
	else if (op == '%')
		res = (int)num1 % (int) num2;
	
	printf("result = %.2f",res);
	
	return 0;
	
}
