//采用递归法的斐波那契数列时函数的调用次数统计 
#include <stdio.h>
int count=0;
void main(){
	long Fibna(int );
	int i;
	for(i=1;i<41;i++){
		count=0;
		Fibna(i);
		printf("Fibna(%d)\t%ld\n",i,count);
	}

	
} 
long Fibna(int n){
	count++;
	if(n>2)
	    { 
	      return Fibna(n-1)+Fibna(n-2);
		}
	else return 1;
}
