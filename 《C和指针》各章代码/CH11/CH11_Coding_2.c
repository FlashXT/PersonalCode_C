#include <stdio.h>
#include <malloc.h>
#define DELTA 100
int count;
//  �ӱ�׼�����ȡһ����EOF��β������������һ��������Щֵ�ö�̬�������顣
//  ����ĵ�һ��Ԫ����������������ֵ������ 
int * readints(){
	int *array;
	int size;
	
	int value;
    
    //�����������飬��С��������DELTA��ֵ 
    size=DELTA;
    array=malloc((size+1)*sizeof(int));
    if(array==NULL)
       return NULL;
    //�ӱ�׼�����ȡֵ 
    count=0;
    while(scanf("%d",&value)==1 && value!=EOF){
    	count++;
    	//�����Ҫi��ʹ������Ȼ��洢���ֵ 
    	if(count>size){
    		size+=DELTA;
    		array=realloc(array,(size+1)*sizeof(int));
    		if(array==NULL) return NULL;
		}
	
	array[count]=value;
   } 
   //�ı�����ĳ��ȣ�ʹ�����ã�Ȼ��洢����ֵ���������ֵ��
   //������������ʹ�������������������ʧ�ܣ�������Ӧ�ý��м�� 
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












 
