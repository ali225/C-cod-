#include<stdio.h>

main()
{
  int x ;
  int s	;
  
  printf("plese enter your working hours :");
  scanf("%d",&x);
  
  if ( 0<= x && x<=50)
  {
  printf("your rating is %d failed",x);
  }
  else if (50 <= x && x <= 65)
  {
  printf("your rating is %d Normal",x);
  }
  else if (65 <= x && x <= 75)
  {
   printf("your rating is %d  good",x);
  }
  else if (75 <= x && x == 85)
  {
   printf("your rating is %d very",x);
  }
  else if (85 <= x )
    printf("your rating is %d Excellent",x);	  
	
}