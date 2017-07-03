#include <stdio.h>
void main(){
	char str[]="adfdsf";
	char str2[]="sf";
	
	char *p=strpbrk(str,str2);
	printf("%2d\t",p-str);
	printf("%2c\t",*p);
	
}
