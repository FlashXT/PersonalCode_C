#include <stdio.h>
void main(){
	char arr[3][3]={{1,2,3},
	                {4,5,6},
					{7,8,9}}; 
 //使用二级指针访问二维数组 
	//	char (*p)[3]=arr;
	//	int i=0,j=0;
	//	for(i=0;i<3;i++)
	//	 for(j=0;j<3;j++)
	//	    printf("%d\t",*(*(p+i)+j)); 

// 使用一级指针访问二维数组 
    char *p=*arr;
    int i=0;
    for(i=0;i<9;i++)
      printf("%d\t",*p++);
	
}
