/* ** Compute an array offset from a set of subscripts and dimension information. */
#include <stdarg.h> 
#include <stdio.h>
#define reg register

void main(){
	int array_offset( reg int *arrayinfo, ... );
	int arrayinfo[]={3,4,6,1,5,-3,3};//����ά����ÿһά�������޴�����arrayifo[]������ 
	//�±���Ϊ��4��1��-2�� 
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
             //�±�ֵ����S[i]�У���ά���м����±� 
			 for( i = 0; i < ndim; i += 1 ) 
			       s[i] = va_arg( subscripts, int ); 
			 va_end( subscripts );
             offset = 0; 
			 for( i = 0; ndim>0; ndim--,i++ ){ 
			     //�ƶ�ָ��ȡ��ÿһά�������� 
			     lo = *arrayinfo++; 
				 hi = *arrayinfo++;
				 //�жϸ������±�ֵ�Ƿ����������� 
                 if( s[i] < lo || s[i] > hi ) return -1;
                 //�ȼ��㱾ά��ƫ������Ȼ���ƶ�ָ�룬
				 //ȡ��һά�Ĵ�С��Ϊ���� 
                 offset *= hi - lo + 1; 
				 offset += s[i] - lo;
             } 
			 return offset;
      } return -1;
}
