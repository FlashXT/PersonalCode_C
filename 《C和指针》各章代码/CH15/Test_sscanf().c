#include <stdio.h>
void main(){
	int a;
	char b;
	char buf[]="2";
//	char buf2[]="";
	char format[]="%[0-9]";
	sscanf(buf,format,&a);
	printf("a=%d\n",a);
//	printf("\nbuf2=%s",buf2);

}
