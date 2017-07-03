#include <stdio.h>
void main(){
	void reverse_string(char *str);
	char str[10]="0123456789";
	char *p=str; 
	reverse_string(str);
	for(;*p!='\0';)
	printf("%2c",*p++);
	
	
}

void reverse_string(char *str){
	char *l_str;
	for(l_str=str;*l_str!='\0';l_str++) ;
	l_str--;
	while(str<l_str){
		char temp;
		temp=*str;
		*str++=*l_str;
		*l_str--=temp;
	} 
}
