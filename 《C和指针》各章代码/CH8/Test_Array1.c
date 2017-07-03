#include <stdio.h>
void main(){
	void Test_Arr1(int arr[10]);
	int arr[5]={1,2,3,4,5};
    Test_Arr2(arr);
}
void Test_Arr1(int arr[]){
	int i=0;
	for(i=0;i<5;i++)
	printf("%2d\t",arr[i]);
}
void Test_Arr2(int *arr){
	int i=0;
	for(i=0;i<5;i++)
	printf("%2d\t",arr[i]);
	
	printf("%2d\t",*(arr+i));
	//上面两句的执行效果相同，
	//C语言中下标访问和间接引用除了优先级，没有什么不同 
}
