#include <stdio.h>

/**
 * Validating User Input) Modify the program in Figure 3.10 to validate its inputs. 
 * On anyinput, if the value entered is other than 1 or 2,
¨* keep looping until the user enters a correct value.
*/

/**
 * main - Print until that user print correct value;
 * Return: 0;
 */

int main( void )
{
	unsigned int passes = 0; // number of passes
	unsigned int failures = 0; // number of failures
	unsigned int student = 1;  // student counter
	int result; // one exam result

	// process 10 students using counter-controlled loop
	while ( student <= 10 )
	{
		// prompt user for input and obtain value from user 18
		printf( "%s", "Enter result ( 1=pass,2=fail ): " );
		scanf( "%d", &result );

		// increment student counter
		student = student + 1;

		// if result =! 1-2 counter decrease
		if ( result != 1 && result !=2){
			student = student - 1;
		}

                // if result 1, increment passes
		else if ( result == 1 ){
			passes = passes + 1;
		} // end if

		else if ( result == 2 ){ // otherwise, increment failures
			failures = failures + 1;
		} // end else

	  }

	printf( "Passed %u\n", passes );
	printf( "Failed %u\n", failures );

	// if more than eight students passed, print "Bonus to instructor!"
	if ( passes > 8 ){
		puts( "Bonus to instructor!" );
	}  // end if

	return (0);
}
