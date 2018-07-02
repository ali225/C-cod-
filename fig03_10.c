#include<stdio.h>

int main(void)
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 1;
	int result;
	
	
	
// process 10 students using counter-controlled loop
 while ( student <= 10 ) {

	// prompt user for input and obtain value from user
	printf( "%s", "Enter result ( 1=pass,2=fail ): " );
	scanf( "%d", &result );

	// if result 1, increment passes
    if(result == 1){         
	passes = passes + 1;
	} // end if
	else{// otherwise, increment failures
	failures = failures + 1;
	} // end else

	student = student + 1; // increment student counter
	} // end while

	// termination phase; display number of passes and 
	printf( "Passed %u\n", passes );
	printf( "Failed %u\n", failures );
	printf( "student %u\n", student );
	printf( "result %u\n", result);
	
	// if more than eight students passed, print "Bonus to 	instructor!"
	if ( passes > 8 ) {
		puts( "Bonus to instructor!" );
	} // end if
} // end function main