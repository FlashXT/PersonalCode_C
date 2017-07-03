/*
 **定义一个内存分配器
 */ 
 //接口 
#include <stdlib.h>
#define malloc   不要直接调用malloc！
#define MALLOC(num,type)   (type*)alloc((num)*sizeof(type))
extern  void *alloc(size_t size);

