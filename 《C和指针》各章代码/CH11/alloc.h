/*
 **����һ���ڴ������
 */ 
 //�ӿ� 
#include <stdlib.h>
#define malloc   ��Ҫֱ�ӵ���malloc��
#define MALLOC(num,type)   (type*)alloc((num)*sizeof(type))
extern  void *alloc(size_t size);

