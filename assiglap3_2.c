#include<stdio.h>

int main()
{	
	int ID=0;
	int password=0;
	int i;

	for(i=0; i<=10; i++)
	{
	printf("please enter ID:");
	scanf("%d",&ID);
		if (ID == 1234){	
			break;
		}else if(ID == 5678){
			break;
		}else if (ID == 9870){
			break;
		}else{
			printf("you are not registered\n");
		}
	}
	for(i=0; i<=10; i++)
	{
	printf("please enter password :");
	scanf("%d",&password);
	int f=0;
	while(f=1)
	{
		if (password == 7788){	
			printf("\nwelcome Ahmed\n");
			break;
		}else if(password == 5566){
			printf("\nwelcome Amr\n");
			break;
		}else if (password == 1122){
			printf("\nwelcomewael\n");
			break;
		}else{
			printf("Try again:\n");
			scanf("%d",&password);
			f=1;
		}
		}
	}

	
	
}