#include<stdio.h>

int main()
{	
	int imt[5];
	int i;
	
	for(i=0; i<=4; i++)
	{
		printf("please Enter Element %d: ",i);
		scanf("%d",&imt[i]);
	}
	printf("\n");
	for(i=0; i<=4; i++)
	{
		printf("\nElement %d = %d ",i,imt[i]);
	}
}		