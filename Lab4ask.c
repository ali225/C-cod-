#include <stdio.h>

main()
{
	int a;
	
	/*Ask user number mul */
	printf("Enter the answer of 3 x 4 = ");
	scanf("%d",&a);
	
	while(a != 12)
	{
		printf("Not correct, Please try again: ");
		scanf("%d",&a);
	}
	
	printf("Thanks you");
	
}