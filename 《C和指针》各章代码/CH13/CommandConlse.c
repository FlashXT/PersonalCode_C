#include <stdio.h>
void main(int argc,char **argv){
	printf("argc=%d\n",argc);
	while(*++argv!='\0') 
	   printf("argv=%s\n",*argv);
}
