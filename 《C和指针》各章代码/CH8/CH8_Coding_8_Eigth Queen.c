#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

//函数声明 
int Check(int (*arr)[SIZE],int const x,int const y);
void PutQueen(int (*arr)[SIZE],int i);
void print(int (*arr)[SIZE]);

//记录解的个数 
int count=1;

void  main(){
	int arr[SIZE][SIZE]={  } ;
    PutQueen(arr,0);
}
//将皇后插入棋盘内
void PutQueen(int (*arr)[SIZE],int row){
	    int colj=0;
        for(colj=0;colj<SIZE;colj++){
           arr[row][colj]=1; 
           int k=Check(arr,row,colj);
	       if(k){
	        	if(row==(SIZE-1)){
				    printf("Sloution:#%2d\n",count++); 
				    print(arr);
				}      
	        	else {
					   PutQueen(arr,row+1); 
				} 
					
		   }       
        arr[row][colj]=0;
       }
}
//检查新插入皇后是否已现有的皇后有冲突

int Check(int (*arr)[SIZE],int row,int col){
	int rowi=0,colj=0;
	//检验左对角线
	if(row>0&&col>0){
		for(rowi=row-1,colj=col-1;rowi>=0 && colj>=0;rowi--,colj--){
		         if(arr[rowi][colj]==1)  
				    return 0;
     	}
	}
	//检验本列 
	if(row>0){
		for(rowi=row-1,colj=col;rowi>=0;rowi--){
		         if(arr[rowi][colj]==1)  
				    return 0;
     	}
	}
	
	//检验右对角线 
    if(row>0&&col<SIZE-1){
		for(rowi=row-1,colj=col+1;rowi>=0 && colj<SIZE;rowi--,colj++) {
			if(arr[rowi][colj]==1)  
			        return 0;
		} 
    }
   	return 1;
}
void print(int (*arr)[SIZE]){
     int i,j;
//     printf("\n-----------------------------------------\n");
	 for(i=0;i<SIZE;i++){
	 	
	 	for(j=0;j<SIZE;j++)
	 	   printf("%3d",*(*(arr+j)+i));
	 	printf("\n");
	 }	
}
