#include<stdio.h>
#define SIZE 5
void main(){
	char buffer[SIZE];
	FILE *des,*sur;
	sur=fopen("text6.txt","r");
	des=fopen("text5.txt","a");
	if(sur==NULL||des==NULL){
		printf("Error!\n");
		return ;
	}
	int count=0;
	while(fgets(buffer,SIZE,sur)!=NULL){
		 fputs(buffer,des);
		 fseek(sur,(SIZE-1)*(++count),0) ;
	} 
	    
	fclose(sur);
	fclose(des);
	des=fopen("text5.txt","r");
	if(des==NULL){
			printf("Error!\n");
		return ;
	}
	while(fgets(buffer,SIZE,des)!=NULL)
	 printf("%s",buffer);
	fclose(des);
} 
