#include<stdio.h>

#define Set_Bit(var,BitNO) (var|=(1<<BitNO))
#define clr_Bit(var,BitNO) (var&=(~(1<<BitNO)))
#define Tog_Bit(var,BitNO) (var^=(1<<BitNO))


 main()
{
	unsigned char x =0b00001000;
	
	printf("the value : %d\n",x);
	Tog_Bit(x,3);
	printf("the value : %d\n",x);


}
