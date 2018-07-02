#include <stdio.h>


int main(void)
{

	int  num;

	/*Ask the user working hour*/
	printf("please Enter you number : ");
	
	/*Save it to hours*/
	scanf("%d",&num);
	
	
	if ((num%2) == 0 )
	{
		printf ("Number is Even");
	}
	
	else
	{
		printf ("Number is Odd");
	}


}