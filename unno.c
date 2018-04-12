#include <stdio.h>

union Grades{
		
		unsigned short low; 
		double High;
		
}

main()
{
	union Grades English;
	English.low = 27334;
	printf("Low = %d \n",English.low);
	printf("High = %lf \n",English.High);

	
}