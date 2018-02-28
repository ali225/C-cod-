#include <stdio.h>

main()
{
	int ID;
	/* Ask the user to enter his ID */
	printf("plese enter you ID : ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Ahmed"); break;
		
		case 5678: printf("Youssef"); break;
		
		case 1145: printf("mina"); break;
		
		default : printf("wrong"); break;
	}
	
}