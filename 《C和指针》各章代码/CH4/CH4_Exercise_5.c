/*  The LINE_SIZE need only be 128 if gets is used, because the newlines are stripped off. 
 *  If they read the input character by character and store the newline, then it must be 129.
 *  The initialization of the previous_line array to the first line of the input avoids the
 *  special case for the ?rst line that would otherwise be needed.*/

// Print one line from each set of duplicate lines in the standard input. 
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define LINE_SIZE 129
main() {
   char input[LINE_SIZE], previous_line[LINE_SIZE]; 
   int printed_from_group = FALSE;
   if( gets( previous_line ) != NULL )
     { while( gets( input ) != NULL )
	    { if( strcmp( input, previous_line ) != 0 )
		   {  printed_from_group = FALSE; 
		      strcpy( previous_line, input ); 
		   } 
		  else if( !printed_from_group )
		    { printed_from_group = TRUE; printf( "OUT:%s\n", input ); 
			}
	    }
     }
}
