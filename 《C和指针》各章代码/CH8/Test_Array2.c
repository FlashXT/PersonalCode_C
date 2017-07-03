#include <stdio.h>
void main(){
	void Test_Array(int arr[2][2]);
	int arr[2][2]={
	               {2,3},
				   {3,4}
				  };
    Test_Array1(arr); 
	
}
void Test_Array1(int arr[2][2]){
	int *p=*arr;
	int i;
	for(i=0;i<4;i++){
	
	    printf("%d\t",*p++);
	}
}
void Test_Array3(int (*arr)[2]){
	int (*p)[2];
	p=arr;
	int i,j;
	for(i=0;i<2;i++){
	  for(j=0;j<2;j++)
	    printf("%d\t",*(*(p+i)+j));
	  printf("\n");
	}
}
void Test_Array2(int arr[][2]){
	int i,j;
	for(i=0;i<2;i++){
	
	  for(j=0;j<2;j++)
	    printf("%d\t",arr[i][j]);
	  printf("\n");
	}
}


