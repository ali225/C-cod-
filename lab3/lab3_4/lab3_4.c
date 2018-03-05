#include <stdio.h>

void main()
{     
    int i;
	
	printf("Enter the answer of 3 * 4 = ");
	scanf("%d",&i);

	
	while (i != 12)
	{
		printf("Not correct , please try again :");
		scanf("%d",&i);
	}
	printf("thank you");
}
