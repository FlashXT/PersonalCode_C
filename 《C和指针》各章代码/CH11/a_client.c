//调用
#include "alloc.h"
#include "alloc.c"
void main(){
	int *new_memory;
	//获得一串整形数的空间
	new_memory=MALLOC(25,int);
	printf("new_memory=%d\n",&new_memory);
} 
