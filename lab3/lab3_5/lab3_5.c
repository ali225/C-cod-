#include <stdio.h>

void main()
{
  int i; 
  int number; 
  
  printf("enter the number :");
  scanf("%d",&number);
  printf("\n");
  
  for(i=1;i<=number;i++)
  {
	  printf("%d X %d = %d \n", number,i,number*i);
  }
}