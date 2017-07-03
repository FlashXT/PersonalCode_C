#include<stdio.h>
#include<limits.h>

#define Value 10000
#define BitN ((Value-3)/2)
#define N    (BitN/CHAR_BIT + 1)
#define Stp Value/10

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
void main(){
    char Prime[N];
	char *p;
	int num;
	int bitnum;
	for(p=&Prime[0];p<&Prime[N];){
		*p++=0xff;
	}  
    for(num=3;num<=Value;num+=2)  {
		bitnum=(num-3)/2;
		if(!test_bit(Prime,bitnum)) continue;
		while((bitnum+=num)<=BitN){
			clear_bit(Prime,bitnum);
		}
	}
	for(bitnum=0,num=3;num<=Value;bitnum++,num+=2)
	  if(test_bit(Prime,bitnum))
	    printf("%d\t",num); 
	printf("\n");
    int n_primes=1,limit=0; 
	for(limit=Stp,bitnum=0,num=3;limit<=Value;limit+=Stp){
		if(limit>Stp)n_primes=0;
		for(;num<limit;bitnum+=1,num+=2) 
	       if(test_bit(Prime,bitnum)) n_primes++;
		printf("%d--%d:%d\n",limit-Stp,limit,n_primes);
	} 
}
