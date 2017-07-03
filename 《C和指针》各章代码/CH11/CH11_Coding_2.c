#include <stdio.h>
#include <malloc.h>
#define DELTA 100
int count;
//  从标准输入读取一列由EOF结尾的整数并返回一个包含这些值得动态分配数组。
//  数组的第一个元素是数组所包含的值额数量 
int * readints(){
	int *array;
	int size;
	
	int value;
    
    //获得最初的数组，大小足以容纳DELTA个值 
    size=DELTA;
    array=malloc((size+1)*sizeof(int));
    if(array==NULL)
       return NULL;
    //从标准输入获取值 
    count=0;
    while(scanf("%d",&value)==1 && value!=EOF){
    	count++;
    	//如果需要i，使数组变大，然后存储这个值 
    	if(count>size){
    		size+=DELTA;
    		array=realloc(array,(size+1)*sizeof(int));
    		if(array==NULL) return NULL;
		}
	
	array[count]=value;
   } 
   //改变数组的长度，使其正好，然后存储计数值并返回这个值。
   //这样做绝不会使数组更大，所以它绝不会失败，但还是应该进行检查 
   if(count<size){
   	 array=realloc(array,(count+1)*sizeof(int));
   	 if(array==NULL) return NULL;
   }
   array[0]=count;
   return array;    
}
void main(){
	int *arr=readints();
	int i=0;
    for(i=0;i<=count;i++)
	 printf("%d\t",*arr++);	
} 












 
