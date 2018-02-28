#include<stdio.h>

main()
{
	int a;
	
	printf("please enter of 3 X 4 = ");
	scanf("%d",&a);
	
	while(a != 12)
	{
		printf("not correct , please try again : ");
		scanf("%d",&a);
	}
	
	printf("thank you ");
}