#include <stdio.h>
void main(){
	FILE *fp=fopen("text7.txt","w+");
	char format[]="%-2c%s%n";
	char str[]="str=124321213214321421A";
	int n=fprintf(fp,format,'a',str);
	//	int n=fprintf(stdout,format,'a',str);
	if(freopen("text7.txt","r",fp)==NULL){
		perror(stderr);
		exit(0);
	}
////    fseek(fp,0,0) ;
	char ch=fgetc(fp);
	while(ch!=EOF){
		putc(ch,stdout);
		ch=fgetc(fp);
	}
//	printf("\nn=%d",n);
} 
