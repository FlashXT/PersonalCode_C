/* ** Compute an array offset from a set of subscripts and dimension information. */
#include <stdarg.h> 
#include <stdio.h>
#define reg register

void main(){
	int array_offset( reg int *arrayinfo, ... );
	int arrayinfo[]={3,4,6,1,5,-3,3};//数组维数和每一维的上下限储存于arrayifo[]数组中 
	//下标设为（4，1，-2） 
	 printf("%2d\t",array_offset(arrayinfo,4,1,-2));
} 
int array_offset( reg int *arrayinfo, ... ) {
      reg int ndim; 
	  reg int offset; 
	  reg int hi, lo; 
	  reg int i; 
	  int s[10]; 
	  va_list subscripts;
    
	  ndim = *arrayinfo++; 
	  if( ndim >= 1 && ndim <= 10 ){
             va_start( subscripts, arrayinfo ); 
             //下标值存入S[i]中，几维就有几个下标 
			 for( i = 0; i < ndim; i += 1 ) 
			       s[i] = va_arg( subscripts, int ); 
			 va_end( subscripts );
             offset = 0; 
			 for( i = 0; ndim>0; ndim--,i++ ){ 
			     //移动指针取出每一维的上下限 
			     lo = *arrayinfo++; 
				 hi = *arrayinfo++;
				 //判断给出的下标值是否在上下限内 
                 if( s[i] < lo || s[i] > hi ) return -1;
                 //先计算本维的偏移量，然后移动指针，
				 //取下一维的大小做为步长 
                 offset *= hi - lo + 1; 
				 offset += s[i] - lo;
             } 
			 return offset;
      } return -1;
}
