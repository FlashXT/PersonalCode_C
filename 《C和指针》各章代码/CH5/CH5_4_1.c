#include <stdio.h>
#include <limits.h>


// Compute the character that will contain the desired bit
unsigned character_offset( unsigned bit_number )
	{
		return bit_number / CHAR_BIT;
	}
//Compute the bit number within the desired character
unsigned bit_offset( unsigned bit_number )
	{
		return bit_number % CHAR_BIT;
	}

//void set_bit(char bit_array[],unsigned bit_nmuber){
//	bit_array[ character_offset( bit_number ) ] |=1 << bit_offset( bit_number );
//}
void clear_bit(char bit_array[],unsigned bit_nmuber){
	
}
void assign_bit(char bit_array[],unsigned bit_nmuber,int value){
	
}
int test_bit(char bit_array[],unsigned bit_nmuber){
	
}

/*
** Implements an array of bits in a character array.
*/
void main(){
	printf("%2d\n",CHAR_BIT);
} 
