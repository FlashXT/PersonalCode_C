#define N 10
#include<stdio.h>
void main(){
	int Prime[N];
	int *p;
	int num=3;
	int i;
	for(p=&Prime[0];p<&Prime[N];){
		*p++=1;
	}  
    for(;;num+=2)  {
		p=&Prime[0]+(num-3)/2;
		if(p>=&Prime[N]) break;
		while(p+=num,p<&Prime[N]){
			*p=0;
		}
	} 
	printf("2\t");
	for(i=3,p=&Prime[0];p<&Prime[N];i+=2) 
	    if(*p++) printf("%d\t",i);  
}
