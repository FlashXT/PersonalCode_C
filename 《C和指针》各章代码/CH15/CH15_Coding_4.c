#include <stdio.h>
#define MAX  512
void main(){
	FILE *in,*out;
	char buffer[MAX];
	char sour[20]={};
	char dest[20]={};
	printf("������Դ�ļ���:");
	scanf("%s",sour);
	printf("������Ŀ�����:");
	scanf("%s",dest);
	in=fopen(sour,"r");
	out=fopen(dest,"w");
	if(in==NULL||out==NULL){
		perror(stderr);
		exit(0);
	}
	while(fgets(buffer,MAX,in)!=NULL)
	    fputs(buffer,out);
	fclose(in);
	fclose(out);
}
