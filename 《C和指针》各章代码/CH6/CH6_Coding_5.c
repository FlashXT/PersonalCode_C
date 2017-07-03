#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_VALUE 10000
#define MAX_BIT_NUMBER ((MAX_VALUE-3)/2)
#define SIZE (MAX_BIT_NUMBER/CHAR_BIT + 1)
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
	int bit_number;
	char *sp;
	for( sp = sieve; sp < &sieve[ SIZE ]; ) *sp++ = 0xff;
	for( number = 3; number <= MAX_VALUE; number += 2 ){
		bit_number=(number-3)/2;
		if(!test_bit(sieve,bit_number)) continue;
		while( ( bit_number += number ) <= MAX_BIT_NUMBER )
			clear_bit( sieve, bit_number );
	}
	// Go through the entire sieve now
	printf( "2\n" );
	for( bit_number = 0, number = 3;number <= MAX_VALUE; bit_number += 1, number += 2 )
		{	 
		     if( test_bit( sieve, bit_number ) ) printf( "%d\n", number );
	    }
			 return EXIT_SUCCESS;
}

