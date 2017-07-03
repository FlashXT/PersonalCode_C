#include <stdio.h>

unsigned int reverse_bits(unsigned int value){
	unsigned int ans=0;
	unsigned int i;
	for(i=1;i!=0;i<<=1){
		ans<<=1;
		if(value&1){
			ans|=1;
		}
		value>>=1;
	} 
	return ans;
	
}
void main(){
//	unsigned int value;
     printf("Start>>>......\n");
	printf("%2d\n",reverse_bits(100));
} 
//value!=0
