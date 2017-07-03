
#include <limits.h>
#include "bitarray.h"

unsigned character_offset( unsigned bit_number );
unsigned bit_offset( unsigned bit_number );


//�����ض�λ��ֵ 
void set_bit( char bit_array[], unsigned bit_number )
	{
	    bit_array[ character_offset( bit_number ) ] |=1 << bit_offset( bit_number );
	}
//���ض�λ���� 
void clear_bit( char bit_array[], unsigned bit_number )
	{
		bit_array[ character_offset( bit_number ) ] &= ~ ( 1 << bit_offset( bit_number ) );
	}
//����valueֵ���ض�λ��ֵ 
void assign_bit( char bit_array[], unsigned bit_number, int value )
	{
		if( value != 0 )
			set_bit( bit_array, bit_number );
		else
			clear_bit( bit_array, bit_number );
	}
//�����ض�λ��ֵ 
int test_bit( char bit_array[], unsigned bit_number )
	{
		return (bit_array[ character_offset( bit_number ) ]& 1 << bit_offset( bit_number )) != 0;
	}

//���ݸ���λ��λ���ض��ַ� 
unsigned character_offset( unsigned bit_number )
	{
		return bit_number / CHAR_BIT;
	}
//���ݸ���λ��λ���ض��ַ����ض�λ 
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






























