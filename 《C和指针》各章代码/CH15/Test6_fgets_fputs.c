#include <stdio.h> 
#define MAX  20
void main(){
	char buffer[20];
	FILE *fp=fopen("text6.txt","r+");
	if(fp==NULL){
		perror(stderr);//�������������ִ��󣬽���׼�������������Ļ�� 
		exit(0);
	}
	fgets(buffer,20,stdin);//�ӱ�׼������stdin(����)��d��ȡ�ַ���buffer�� 
	char *p=buffer;
	fputs(buffer,stdout); //��buffer�е������������׼�����stdout(��Ļ)�� 
//	while(*p!=NULL)
//	{    printf("%c",*p++);
//	}
}
