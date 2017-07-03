//函数可变参数测试 
#include <stdio.h>
#include <stdarg.h>
void main(){
	int Sum(int values,...);
	int sum=0;
	printf("sum=%d\n",Sum(3,1,2,3));
} 

int Sum(int values,...){
	va_list arg;
	int sum=0;
	int i;
	va_start(arg,values);
	for(i=0;i<values;i++)
	 sum=sum+va_arg(arg,int);
	va_end(arg); 
   return sum;
}
