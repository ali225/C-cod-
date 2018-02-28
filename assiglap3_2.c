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
		if (password == 7788){	
			printf("Ahmed");
			break;
		}else if(password == 5566){
			printf("Amr");
			break;
		}else if (password == 1122){
			printf("wael");
			break;
		}else{
			printf("Try again:");
			scanf("%d",&password);
		}
	}

	
	
}