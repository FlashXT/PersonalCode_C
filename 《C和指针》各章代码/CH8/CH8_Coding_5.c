#include<stdio.h>
void main(){
	void matrix_multiply(int *m1,int *m2,int *r,int x,int y,int z);
	int x=3,y=2,z=4;
	int m1[3][2]={  { 2, -6},
	                { 3,  5},
					{ 1, -1}
				 };
	int m2[2][4]={{ 4,-2,-4,-5},
	              {-7,-3, 6, 7}
				 };
	int r[3][4]={{},{},{}};//记得初始化，否则原地址的内容会计算进来 
	matrix_multiply(*m1,*m2,*r,x,y,z);
	int i,j;
	for(i=0;i<x;i++){ 
	   	for(j=0;j<z;j++)
	      printf("%2d\t",*(*(r+i)+j));
        printf("\n");
	} 
} 
void matrix_multiply(int *m1,int *m2,int *r,int x,int y,int z){
	int i,j,k;
	for(i=0;i<x;i++){
	  for(j=0;j<z;j++){
	  	 for(k=0;k<y;k++)
	       *r=*r+*(m1+k+i*y) * *(m2+j+k*z);//第一个矩阵的行乘以第二个矩阵的列，
		                                   //第二个矩阵的步长为列数，第一个矩阵的步长为行数 
	     r++;
	  }
    }
}
