#include <stdio.h>
#define MAX  512
void main(){
	FILE *in,*out;
	char buffer[MAX];
	char sour[20]={};
	char dest[20]={};
	char format[]="total=%d";
	int total=0;
	int value=0;
//	printf("请输入源文件名:");
//	scanf("%s",sour);
//	printf("请输入目标件名:");
//	scanf("%s",dest);
	in=fopen("Coding041.txt","r");
	out=fopen("Coding051.txt","w");
	if(in==NULL||out==NULL){
		perror(stderr);
		exit(0);
	}
	while(fgets(buffer,MAX,in)!=NULL){
		if(sscanf(buffer,"%[0-9]",&value)==1){
			total+=(value-48);
			fputs(buffer,out);
		}
		
	}
	fprintf(out,format,total);
	fclose(in);
	fclose(out);
}
