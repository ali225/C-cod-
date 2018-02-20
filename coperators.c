#include<stdio.h>

main()
{
	unsigned int x = 10;
	x+=3;	//x=x+3;
	printf("\nx = %d",x);
	x-=2;	//x=x-2;
		printf("\nx = %d",x);
	x*=5;	//x=x*5;
		printf("\nx = %d",x);

	x/=2;	//x=x/2;
		printf("\nx = %d",x);

	x%=7;	//x=x%7;
		printf("\nx = %d",x);

//////
	x&=2;	//x=x&2;
		printf("\nx = %d",x);

	x|=3;	//x=x|13;
		printf("\nx = %d",x);

	x^=5;	//x=x^5;
		printf("\nx = %d",x);

	x>>=3;	//x=x>>3;
		printf("\nx = %d",x);

	x<<=7;	//x=x<<7;
		printf("\nx = %d",x);

}