#include <stdio.h>
#define MAX 5
void main(){
	FILE *fp=fopen("text11.txt","r+");
	if(fp==NULL){
		perror(stderr);
		exit(0);
	}
	while(!feof(fp)){
	   fseek(fp,4,SEEK_CUR);
	   printf("%2X\n",ftell(fp));
	}
	printf("%X\n",ftell(fp));
}
