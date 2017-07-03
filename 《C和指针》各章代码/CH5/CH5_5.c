
#include<stdio.h>
void main(){
	short int ChanYM(short int);
	int CZYM(int,int);
	int New(int,int);
	void Bit_Print(short int);
	
	Bit_Print(CZYM(9,13));//创造掩码 
	Bit_Print(ChanYM(CZYM(9,13))&0xffff);//掩码求反 后 与原值 &操作， 
	Bit_Print(New(0x123,9)&CZYM(9,13));//存储数左移，得到的值与掩码&操作； 
	Bit_Print((New(0x123,9)&CZYM(9,13))|(ChanYM(CZYM(9,13))&0xffff));
	printf("0x%x\n",(New(0x123,9)&CZYM(9,13))|(ChanYM(CZYM(9,13))&0xffff));
	  
} 

//新值移位 

int New(int new_value,int begin){
	return new_value<<=begin;
	
} 
//掩码求反 
 short int ChanYM(short int original){
	int k=sizeof(short int)*8;
	int n=original;
	int i;
	int  a=1;
	for(i=0;i<k;i++){
		if(n&a){
			n=n-a;
		}
		else{
			n=n+a;
		}
		a<<=1;
	} 
	    return n;
}


//创造掩码
int CZYM(int begin,int end){
	int M=0;
	int i=0;
	int flag=1;
	for(i=0;i<begin;i++){
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
	printf("\n");	
}  
