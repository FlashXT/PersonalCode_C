/* 
 ** Sieve of Eratosthenes ¨C¨C compute prime numbers using an array. 
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define TRUE 1 
#define FALSE 0
int main() {
   char sieve[ SIZE ]; 
   char *sp; 
   int number;
   for( sp = sieve; sp < &sieve[ SIZE ]; ) 
       *sp++ = TRUE;
   for( number = 3;; number += 2 ){ 
		sp = &sieve[ 0 ] + (number-3)/2; 
		if( sp >= &sieve[ SIZE ] )
		   break;
        while( sp += number, sp < &sieve[ SIZE ] ) 
		       *sp = FALSE;
    }
    /* 
	 ** Go through the entire sieve now and print the numbers corresponding
	 ** to the locations that remain TRUE. 
	 */ 
    printf("2\t");
    for( number = 3, sp = &sieve[ 0 ]; sp < &sieve[ SIZE ]; number += 2, sp++ ){
	  if( *sp ) printf( "%d\t",number ); 
	}
	getch();
    return EXIT_SUCCESS;
}


