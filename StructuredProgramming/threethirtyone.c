#include <stdio.h>


/**
 * main - (Another Dangling-Else Problem)
 *
 * Modify the following code to produce the output shown.
 * Use proper indentation techniques. You may not make
 * any changes other than inserting braces.
 * The compiler ignores the indentation in a program.
 * We eliminated the indentation
 * from the following code to make the problem more challenging.
 * [Note: It’s possible that no modification is necessary.]
 *
 * Return: 0 if is success
 */

int main(void)
{
        /**
 *	int x, y;
 *	x = 5;
 *	y = 8;
 */

        /**
 *      if ( y == 8 )
 *               if ( x == 5 )
 *			puts( "@@@@@" );
 *		else
 *			puts( "#####" );
 *	puts( "$$$$$" );
 *      puts( "&&&&&" );
 */

        // Output @@@@@
        //        $$$$$
        //        &&&&&

        /**
 *	if ( y == 8 )
 *	{
 *		if ( x == 5 )
 *		       puts( "@@@@@" );
 *	}
 *	else
 *      {
 *		puts( "#####" );
 *	        puts( "$$$$$" );
 *		puts( "&&&&&" );
 *	}
 */

        /// Output @@@@@

        /**
 *	if (y == 8 ) {
 *		if ( x == 5 )
 *			puts( "@@@@@" );
 *		else{
 *			puts( "#####" );
 *			puts( "$$$$$" );
 *		}
 *                       puts( "&&&&&" );
 *	}
 */

        // Output @@@@@
        //        &&&&&

        /**
 *	int x, y;
 *	x = 5;
 *	y = 7;
 */

        /**
 *	if ( y == 8 ){
 *               if ( x == 5 )
 *                   puts( "@@@@@" );
 *	}
 *
 *      else
 *      puts( "#####" );
 *      puts( "$$$$$" );
 *      puts( "&&&&&" );
 */

        // Output  #####
        //	   $$$$$
        //	   &&&&&

        return (0);
}
