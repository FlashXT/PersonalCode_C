/* ** Compute an array offset from a set of subscripts and dimension information. */
//�������������෴�� 
#include <stdarg.h> 
#define reg register
int array_offset2( reg int *arrayinfo, ... ) { 
        reg int ndim; 
		reg int hi; 
		reg int offset; 
		reg int lo; 
		reg int *sp; 
		int s[10]; 
		va_list subscripts;
       /* 
	    ** Check number of dimensions 
	    */ 
        ndim = *arrayinfo++; 
		if( ndim >= 1 && ndim <= 10 ){
		       /* 
			    ** Copy subscripts to array 
				*/
		        va_start( subscripts, arrayinfo ); 
				for( offset = 0; offset < ndim; offset += 1 ) 
				    s[offset] = va_arg( subscripts, int ); 
				va_end( subscripts );
		      /* 
			   ** Compute offset, starting with last subscript and working back 
			   ** towards the first. 
			   */
		        offset = 0; 
				arrayinfo += ndim * 2; //��ָ���ƶ�������β���� 
				//spָ��S[]����β���� 
				sp = s + ndim; 
				while( ndim-->= 1 ){ 
				  /* ** Get the limits for the next subscript. */ 
				  //��β����ʼ���㣻 
				    hi = *--arrayinfo; 
					lo = *--arrayinfo;
			        if( *--sp > hi || *sp < lo ){ return -1; } 
			        offset *= hi-lo + 1; 
					offset += *sp-lo;
		        } return offset;
        } 
		return -1;
}

