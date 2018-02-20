#include<stdio.h>

main()
{
  int x ;
  int s	;
  
  printf("plese enter your working hours :");
  scanf("%d",&x);
  s= x * 50;
  
  if (x >= 40)
  {
  printf("your salary is %d",s);
  }
  else
  {
	s = s - (.1*s);  //s = 0.9*s; 			
	printf("your salary is %d",s); 
  }
	
}