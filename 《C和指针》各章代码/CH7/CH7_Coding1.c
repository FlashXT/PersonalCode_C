#include <stdio.h>
long Hermite(int n,int x){
	long result=0; 
	if(n<=0)  return result=0;
	else if(n==1) return  result=2*x;
	else 
	   return  result=2*x*Hermite(n-1,x)-2*x*Hermite(n-2,x);
} 
void main(){
	printf("%ld\n",Hermite(10,20));
}


