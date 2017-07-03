#include <stdio.h>
void main(){
	void Size(char[]);
	char src[10]="";
	printf("%2d",sizeof(src));
	Size(src);
	} 
void Size(char src[]){
	printf("%2d",sizeof(src));
}
