#include <stdio.h>
#define MAX 8
void main(){
	char buffer[MAX];
	FILE *fp=fopen("text11.txt","r");
	if(fp==NULL) {
		perror(stderr);
		exit(0);
	}
//	char ch;
//	ch=fgetc(fp);
//	 while(ch!=EOF){
//	 	  fputc(ch,stdout);
//	 	  ch=fgetc(fp);
//	 }
	int i=0;
	while(feof(fp)==0){
	     fgets(buffer,MAX,fp);fputs(buffer,stdout);
		 fseek(fp,sizeof(int)*(++i),SEEK_SET);
		
	}
	
	
} 
