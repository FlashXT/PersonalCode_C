#include <stdio.h>
void main(){
	int ascii_to_interger(char *string);
	char *p="12345";
	printf("%5d\n",ascii_to_interger(p));
}
int ascii_to_interger(char *string){
	int value;
	value=0;
	while(*string >='0' && *string<='9'){
		value*=10;
		value+=*string - '0';
		string++;
	}
	if(*string!='\0')
	    value=0;
	return value;
}
