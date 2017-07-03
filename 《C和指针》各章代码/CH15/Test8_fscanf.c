#include <stdio.h>
#define MAX 20 
void main(){
	FILE *fp=fopen("text7.txt","w+");
	if(freopen("text7.txt","r",fp)==NULL){
		perror(stderr);
		exit(0);
	}
	char format[]="%s";
	char buffer[MAX];
//	int n=fscanf(stdin,format,buffer); //从给定的流中读取字符格式化，若流为stdin，则等同于scanf(); 
	sscanf("ADDDCCXCIHPOHUIG",format,buffer);//从给定的字符串中读取字符格式化 
//	buffer[MAX-1]='\0';
	char *p=buffer;
	while(*p!='\0')
	    printf("%c",*p++);
//	fprintf(stdout,format,'a',str);
//	
//
//	char ch=fgetc(fp);
//	while(ch!=EOF){
//		putc(ch,stdout);
//		ch=fgetc(fp);
//	}
//	printf("\nn=%d",n);
} 
