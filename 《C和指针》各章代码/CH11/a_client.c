//����
#include "alloc.h"
#include "alloc.c"
void main(){
	int *new_memory;
	//���һ���������Ŀռ�
	new_memory=MALLOC(25,int);
	printf("new_memory=%d\n",&new_memory);
} 
