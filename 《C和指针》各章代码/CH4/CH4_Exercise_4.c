#include <stdio.h>
int main(){
	void copy_n(char[],char[],int);
	int i;
	char dst[10]="";
	char src[5]="ABCDE";
	copy_n(dst,src,8);
	
	for(i=0;i<10;i++)
	printf("%2d",i);
	printf("\n");
	for(i=0;i<10;i++)
	printf("%2c",dst[i]);
}

void copy_n(char dst[],char src[],int n){
	   int m=5;
	   int i;
	   if(n<=m){
	   	for(i=0;i<n;i++)
	   	  dst[i]=src[i];
	   }
	   else{
	   	  for(i=0;i<m;i++)
	   	     dst[i]=src[i];
	   	  for(;i<n;i++)
	   	     dst[i]='\0';
	   }
}
