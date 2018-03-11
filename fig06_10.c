#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main( void )
{
	char string1[ SIZE ]; // reserves 20 characters
	char string2[] = "string literal"; // reserves 15 characters
	size_t i; // counter

	// read string from user into array string1
	printf( "%s", "Enter a string (no longer than 19 characters): " );
	scanf( "%19s", string1 ); // input no more than 19 characters

	printf( "string1 is: %s\nstring2 is: %s\n"
			"string1 with spaces between characters is:\n",
			string1, string2 );

	
	for ( i = 0; i < SIZE && string1[ i ] != '\0'; ++i ) {
	printf( "%c ", string1[ i ] );
	} 
	 puts( "" );
} // end for