#include <stdio.h>
void main(){
  int identify_matrix(int const *matrix,int num);
  int matrix[2][2]={{1,0},{0,1}};
   printf("%d\t",identify_matrix(*matrix,2));
}
int identify_matrix(int const *matrix,int num){
	int row;
	int column;
	for(row=0;row<num;row++)
	  for(column=0;column<num;column++){
	  	 if(*matrix++!=(row==column))
	  	   	 return 0;	  	    
	  }	
	return 1;
}
