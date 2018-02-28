/* Using if statements , relational 
operators , and equality operators */
#include <stdio.h>

/*Function main begins program execution */
int main (void)
{
	int num1;/*First number to be read from user */	
	int num2;/*Second number to be read from user */
	
	printf("enter two integers , and i will tell you \n");
	printf("the relationships they satisfy ");
	
	scanf("%d%d",&num1,&num2);/*read two integers */
	
	if (num1 == num2)
	{
		printf("%d is equal to %d\n",num1,num2);
	}/* end if */
	
	if (num1 != num2)
	{
		printf("%d is not equal to %d\n",num1,num2);
	}/*end if*/
	
	if (num1 < num2)
	{
		printf("%d is less than %d \n",num1,num2);
	}/*end if*/	
	if (num1 > num2)
	{
		printf("%d is greater than %d \n",num1,num2);
	}/*end if*/	
	if (num1 <= num2)
	{
		printf("%d is less than or equal to %d \n",num1,num2);
	}/*end if*/	
	if (num1 >= num2)
	{
		printf("%d is greater than or equal to %d \n",num1,num2);
	}/*end if*/	
	
	return 0; /* indicate that program ended successfully*/
}/*end function main */