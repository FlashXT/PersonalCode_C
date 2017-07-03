#include <stdio.h>
#include <stdlib.h>
#define  MAX 20
int  count=0; 
char * Input(){
	char ch;
	char *str;
	int size=MAX;

	str=malloc((size+1)*sizeof(char));
	if(str==NULL) return NULL;
	while(scanf("%c",&ch)==1 && ch!='\n'){
		
		if(count>MAX){
			size+=MAX;
			str=realloc(str,(size+1)*sizeof(char));
			if(str==NULL) return NULL;
		}
		str[count]=ch;
		count++;
	}
	str[count]='\0';
	return str; 
}
void Print(char *str){
	char *p=str;
//      int i=0;
	  while(*p!='\0')
//      for(i=0;i<count;i++)
	     printf("%c",*p++);
	
}
void main(){
	char *str;
	str=Input();
	//printf("%c",str);//加了这句就报错！ 
	Print(str);
}
