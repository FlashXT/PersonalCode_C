#include<stdio.h>
void main(){
	void Bit_Print(short int);
	Bit_Print(CZYM(9,13));
	
} 




//创造掩码

int CZYM(int begin,int end){
	int M=0;
	int i=0;
	int flag=1;
	for(i=0;i<begin-1;i++){
		flag<<=1;
	}
	for(i=begin;i<=end;i++){
		M|=flag;
		flag<<=1;
	}
	
	
	
	return M;
	
} 


//按位输出函数
void Bit_Print( short int num){

	int i;
	int k=sizeof(short int)*8;
//	printf("%d\n",k);
	printf("15    14    13    12    11    10    09    08    07    06    05    04    03    02    01    00\n");
	int bit[k];
	for(i=1;i!=0;i<<=1){
       bit[--k]=num&1;
       num>>=1;
	}
	 printf("\n");
	for(i=0;i<16;i++){
		 printf("%2d    ",bit[i]);
	}	
}  