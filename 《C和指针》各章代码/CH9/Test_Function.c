#include <stdio.h>
#include <string.h>
void main(){
	char str1[]="abcdefghigkla";
	char str2[]="a";
//	printf("%d\n",strlen(str1));//计算字符串长度 
//	strcpy(str1,str2);//将str2复制到str1中，覆盖原来数据。 
//    strcat(str1,str2);
//	char *pstr=str1; 
//	for(;*pstr!='\0';)
//	  printf("%c",*pstr++);
    char *ch=strrchr(str1,'a');
	printf("位置=%d\n",ch-str1+1); 
} 
