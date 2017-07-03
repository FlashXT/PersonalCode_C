#include <stdio.h>
#define MAX  512
void main(){
	FILE *out;
	char format[]="%d";
	int total=0;
	int value=0;

	out=fopen("Coding051.txt","w");

	fprintf(out,format,total);

	fclose(out);
}
