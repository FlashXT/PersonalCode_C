#include <stdio.h>
#include <string.h>
void main(){
	char str1[]="abcdefghigkla";
	char str2[]="a";
//	printf("%d\n",strlen(str1));//�����ַ������� 
//	strcpy(str1,str2);//��str2���Ƶ�str1�У�����ԭ�����ݡ� 
//    strcat(str1,str2);
//	char *pstr=str1; 
//	for(;*pstr!='\0';)
//	  printf("%c",*pstr++);
    char *ch=strrchr(str1,'a');
	printf("λ��=%d\n",ch-str1+1); 
} 
