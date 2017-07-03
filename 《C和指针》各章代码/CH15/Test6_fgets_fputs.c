#include <stdio.h> 
#define MAX  20
void main(){
	char buffer[20];
	FILE *fp=fopen("text6.txt","r+");
	if(fp==NULL){
		perror(stderr);//如果打开输出流出现错误，将标准错误流输出到屏幕上 
		exit(0);
	}
	fgets(buffer,20,stdin);//从标准输入流stdin(键盘)中d读取字符到buffer中 
	char *p=buffer;
	fputs(buffer,stdout); //将buffer中的内容输出到标准输出流stdout(屏幕)上 
//	while(*p!=NULL)
//	{    printf("%c",*p++);
//	}
}
