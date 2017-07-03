#include <stdio.h>
#define MAX 20
void main(){
	char buffer[MAX];
	FILE *fp=fopen("text9.txt","r");
	int n=fread(buffer,sizeof(char),20,stdin);
	printf("n=%d\n",n);
	int m=fwrite(buffer,sizeof(char),20,stdout);
} 
