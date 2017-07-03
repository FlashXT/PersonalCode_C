#include<stdio.h>
#include<limits.h>
void main(){
	int matrix[][3]={
	        {1,2,3},
			{7,8,9},
			
		};
    int length=sizeof(matrix)/sizeof(*matrix);
    
//	printf("%d\t",length);
//	printf("%d\t",sizeof(matrix));
//	printf("%d\t",sizeof(*matrix));	
    printf("%d\t",**matrix);
	int i,j;
	for(i=0;i<length;i++){
	  for(j=0;j<sizeof(*matrix)/sizeof(int);j++){
//	      printf("%d\t",*(matrix[i]+j));
//        printf("%d\t",*(*(matrix+i)+j));
//          printf("%d\t",*(*matrix+i*3+j));
	  }
    }
} 
