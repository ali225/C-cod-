#include <stdio.h>


int main(void)
{

	int  hours,salary ;

	/*Ask the user working hour*/
	printf("please Enter you Working hour : ");
	
	/*Save it to hours*/
	scanf("%d",&hours);
	
	/*calculate salary */
	salary = hours * 50 ; 
	
	if (hours < 40)
	{
		/* if hours less than 40, deduct 10 % */
		salary = ( salary * 90 ) / 100 ;
	}
	
	/*print the salary  */
	printf("you salary is %d",salary);
	
	


}