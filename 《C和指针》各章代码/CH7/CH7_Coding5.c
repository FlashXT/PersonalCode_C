//实现简单的printf函数 
#include <stdarg.h>
#include <stdio.h> 
void main(){
	void Printf(char *format ,...);
	char *p="ABCDEFGHIJK";
	Printf("Hello,World!%d %f %s",123,34.0,p);
}
void Printf(char *format ,...){
	va_list arg;
	char ch;
	char *str;
	va_start(arg,format);
	//Get the format characters one by one.
	while((ch=*format++)!='\0'){
		if(ch!='%')
		 {  putchar(ch);
		    continue;
	     }
	    //get a"%"
	    switch(*format!='\0' ? *format++ : '\0'){
	    	case 'd':
	    	      printf("%d\t",va_arg(arg,int));
//	    		  printf_integer(va_arg(arg,int));
	    		  break;
	    	case 'f':
	    		  printf("%f\t",va_arg(arg,double));
//	    		  printf_float(va_arg(arg,float));
	    		  break;
	    	case 'c':
	    		  putchar(va_arg(arg,float));
	    		  break;
	        case 's':
	        	str=va_arg(arg,char*);
	        	while(*str!='\0')
	    		    putchar(*str++);
	    		break;
		}
		va_end(arg); 
	}
	
}
