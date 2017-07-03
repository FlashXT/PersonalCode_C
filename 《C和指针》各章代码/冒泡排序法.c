//√∞≈›≈≈–Ú∑®
#include<stdio.h>
void main(){
	int i=0;
	int arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
	MPPX(arr[1],5);
	for(i=0;i<5;i++){
		printf("%2d",arr[1][i]);
	}	
	getchar();
} 

int  MPPX(int arr[],int length){
	int i,j;
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1;j++){
			int temp;
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return 0;
}
