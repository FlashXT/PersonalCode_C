#include <stdio.h>

unsigned int reverse_bits(unsigned int value){
	unsigned int ans=0;
	unsigned int i=1;
	while(i!=0){
		ans<<=1;
		if(value&1){
			ans|=1;
		}
		value>>=1;
		
		i<<=1;
	}
	return ans;
	
}
void main(){
//	unsigned int value;
     printf("Start>>>......");
	printf("%2d\n",reverse_bits(100));
} 
//value!=0
