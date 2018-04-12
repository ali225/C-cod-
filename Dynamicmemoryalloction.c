#include <stdio.h>
#include <stdlib.h>

main()
{
	int noe;
	int i ; 
	int *ptr;
	
	printf(" pleas Enter number  :");
		scanf("%d",&noe);

	ptr = (int*)calloc(noe,sizeof(int));
	
	printf("\n\nEnter the value before  :\n\n ");
	
	for( i=0;i<noe ;i++)
	{
		printf("%d\n ",ptr[i]);
	}
	printf("\n\n pleas enter the value :\n\n ");
	
	for ( i=0;i<noe ;i++)
	{
		scanf("%d ",&ptr[i]);
	}
	printf("\n\n the value After initiliaz  :\n\n ");

	for ( i=0;i<noe ;i++)
	{
		printf("%d\n",ptr[i]);
	}
	
	free(ptr);
	
	printf("\n\n the After ferr ptr   :\n\n ");

	for ( i=0;i<noe ;i++)
	{
		printf("%d\n",ptr[i]);
	}
	
	
	
}