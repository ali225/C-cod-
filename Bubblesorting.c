#include<stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z;
	
	/* Scan the value loop */
	for(i=0;i<10;i++)
	{
		printf("enter the number %d :",i);
		scanf("%d",&array[i]);
	}
	
	/*sort the value using Bubbel sort*/
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size;j++)
		{
			if (array[j]>array[j+1] )
			{
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
}