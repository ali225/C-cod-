#include<stdio.h>

int main()
{	
	int i;
	int j;
	int temp;
	int arry[5]={9,8,7,6,5};
	
	for (j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{	
			if (arry[i] > arry[i+1])
			{
				temp = arry[i];
				arry[i] = arry[i+1];
				arry[i+1] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("the arry = %d  \n",arry[i]);
	}
}		