#include <stdio.h>
void main(){
	int identify_matrix(int const(*matrix)[2]);
	int matrix[2][2]={{1,0},{0,1}};
	int (*p)[2]=matrix; 
	identify_matrix(p);
}

int identify_matrix(int const (*matrix)[2]){
	int i=0,j=0;
	int flag=0;
	for(i=0;i<2;i++){
		 for(j=0;j<2;j++)
	     {
	 	    if(i==j) 
			  {
				  if(matrix[i][j]!=1)flag=1;
			   } 
	 	    else    
			   {
			     if (matrix[i][j]!=0) flag=1;
			   }
	     }
	}
	printf("%d\t",flag);
	return flag;	
}
