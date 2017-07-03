//ì³²¨ÄÇÆõÊýÁÐ 
#include <stdio.h>
#define N 50
void main(){
	int i=0;
	for(i=1;i<=N;i++)
	  Fibona(i);
	
} 

void Fibona(int n){
	int i=n;
    long one=1;
    long  two=1;
    long  result=1;
    
    while(i>2){
    	result=one+two;
    	one=two;
    	two=result;
    	i--;
	}
	printf("Fibona(%d)=%ld\n",n,result);
}
