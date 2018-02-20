#include<stdio.h>

main()
{
  int x;
  int r;
  
  printf("plese enter your number :");
  scanf("%d",&x);
 
  r = x %2;
 
  if (r == 0)
  {
     printf("even");
  }
  else
  {		
	  printf(" odd"); 
  }
	
}