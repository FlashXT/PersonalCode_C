#include <stdio.h>
#include <limits.h> 

/* ** An optimization that was not described in the problem statement: 2 is 
   ** the only even number that is prime, so to save space and time the bit 
   ** array only represents the odd values. 
*/
/* ** MAX_VALUE is the largest number in our "list". 
   ** 
   ** MAX_BIT_NUMBER is the bit number corresponding to MAX_VALUE, considering 
   ** that we only keep bits to represent the odd numbers starting with 3. 
   ** 
   ** SIZE is the number of characters needed to get enough bits. 
*/ 
#define MAX_VALUE 10000
#define MAX_BIT_NUMBER ((MAX_VALUE-3)/2) 
#define SIZE (MAX_BIT_NUMBER/CHAR_BIT + 1)
#define Stp MAX_VALUE/10


//根据给定位定位到特定字符 
unsigned character_offset( unsigned bit_number )
	{
		return bit_number / CHAR_BIT;
	}
//根据给定位定位到特定字符的特定位 
unsigned bit_offset( unsigned bit_number )
	{
		return bit_number % CHAR_BIT;
	}
//测试特定位的值 
int test_bit( char bit_array[], unsigned bit_number )
	{
		return (bit_array[ character_offset( bit_number ) ]& 1 << bit_offset( bit_number )) != 0;
	}	
//将特定位清零 
void clear_bit( char bit_array[], unsigned bit_number )
	{
		bit_array[ character_offset( bit_number ) ] &= ~ ( 1 << bit_offset( bit_number ) );
	}
int main() {
  char sieve[ SIZE ]; 
  int number; 
  int n_primes,limit;
  int bit_number; 
  char *sp; 
  for( sp = sieve; sp < &sieve[ SIZE ]; ) *sp++ = 0xff;
  for( number = 3; number <= MAX_VALUE; number += 2 ){ 
       bit_number=(number-3)/2;
	   if(!test_bit(sieve,bit_number)) continue; 
       while( ( bit_number += number ) <= MAX_BIT_NUMBER )  
	     clear_bit( sieve, bit_number );
    }
     for(bit_number=0,number = 3;number<=MAX_VALUE;bit_number++,number+=2)  {
	  if(test_bit(sieve,bit_number)) 
			printf("%d\t",number);
		}
	printf("\n");
  /* ** Go through the entire sieve now, and print the numbers corresponding 
     ** to the locations that remain TRUE. */ 
    n_primes = 1; limit = Stp;
    for( bit_number = 0, number = 3; number <= MAX_VALUE; bit_number += 1, number += 2 )
	   { 
	    if(number>limit){ 
			     printf( "%d–%d: %d\n", limit-Stp, limit, n_primes );
		         n_primes = 0; limit += Stp; 
	    }
	   	if( test_bit( sieve, bit_number ) ) 
				  		      n_primes += 1; 	
	  } 
	 printf( "%d–%d: %d\n", limit-Stp, limit, n_primes );

  }

























