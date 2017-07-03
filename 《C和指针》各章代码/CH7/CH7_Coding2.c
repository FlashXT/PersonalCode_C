#include <stdio.h>
void main(){
	int GCD(int m,int n);
	printf("%d\t",GCD(60,25));
} 

int GCD(int m,int n){
	if(m<0||n<0) return 0;
	
	else if(m%n==0) return n;
	else
	     GCD(n,m%n);
}
