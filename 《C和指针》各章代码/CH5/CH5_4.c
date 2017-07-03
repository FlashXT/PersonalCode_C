
#include <limits.h>
#include "bitarray.h"

unsigned character_offset( unsigned bit_number );
unsigned bit_offset( unsigned bit_number );


//设置特定位的值 
void set_bit( char bit_array[], unsigned bit_number )
	{
	    bit_array[ character_offset( bit_number ) ] |=1 << bit_offset( bit_number );
	}
//将特定位清零 
void clear_bit( char bit_array[], unsigned bit_number )
	{
		bit_array[ character_offset( bit_number ) ] &= ~ ( 1 << bit_offset( bit_number ) );
	}
//根据value值设特定位的值 
void assign_bit( char bit_array[], unsigned bit_number, int value )
	{
		if( value != 0 )
			set_bit( bit_array, bit_number );
		else
			clear_bit( bit_array, bit_number );
	}
//测试特定位的值 
int test_bit( char bit_array[], unsigned bit_number )
	{
		return (bit_array[ character_offset( bit_number ) ]& 1 << bit_offset( bit_number )) != 0;
	}

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
	
	

	
void main(){
	char arr[1]={'1'};
		printf("%d\n",arr[0]);
	char i;
	int k=sizeof(char)*8;
	printf("128\t64\t32\t16\t8\t4\t2\t1\n");
	int bit[k];
	for(i=1;i!=0;i<<=1){
       bit[--k]=arr[0]&1;
       arr[0]>>=1;
	}
	 printf("\n");
	for(i=0;i<8;i++){
		 printf("%d\t",bit[i]);
	}
//	arr[0]='1';
//	 printf("\n");
//     printf("%d\n",arr[0]);
//	 for(i=0;i<8;i++){
//		printf("%d\t",test_bit(arr,i));
//	}
//	
} 






























