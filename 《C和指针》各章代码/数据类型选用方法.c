//①学会使用 limits.h 查看各种数据类型的范围
//②使用sizeof() 函数查看各种逐句类型占用的字节数 
//③不同数据类型的输出格式 
#include <stdio.h>
#include <limits.h>
void main(){
    long long a=21474834321;
	printf("INT_MAX=%lld\n",LONG_LONG_MAX);
//	printf("Sizeof_INT=%d\n",sizeof(int));
//	printf("Sizeof_Long long=%d\n",sizeof(unsigned long));
//	printf("%lld",a);
    printf("Sizeof_Float=%d\n",sizeof(float));
	printf("Sizeof_Double=%d\n",sizeof(double));
    float b=1.4f;
    double c=1.4;
    printf("%.1f\n",b);//%后面加需要保留的小数位数 
    printf("%.13lf",c);
} 

