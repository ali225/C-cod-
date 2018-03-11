#include<stdio.h>

void tryToModifyArray( const int b[] );

int main(void)
{
	int a[] = { 10, 20, 30 }; // initialize array a

	tryToModifyArray( a );
	
	printf("%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );

}

void tryToModifyArray( const int b[] )
{
	//b[ 0 ] /= 2; // error
	//b[ 1 ] /= 2; // error
	//b[ 2 ] /= 2; // error
} // end function tryToModifyArray