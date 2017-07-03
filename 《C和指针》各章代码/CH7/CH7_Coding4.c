#include<stdio.h>
#include<stdarg.h>
void main(){
	int Maximum(int firarg,...);
    Maximum(1,2,3,4,-5);
	
} 

int Maximum(int firarg,...){
	va_list args;
	int max=firarg;
	if(firarg>=0){
		int this_arg;
		va_start(args,firarg);
		while((this_arg=va_arg(args,int))>=0){
		   if(this_arg>max)
		       max=this_arg;
		    printf("%d\n",this_arg);
	    }
	    va_end(args);
//	    printf("%d\n",max);
	}
	
    return max;
} 
