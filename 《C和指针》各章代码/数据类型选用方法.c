//��ѧ��ʹ�� limits.h �鿴�����������͵ķ�Χ
//��ʹ��sizeof() �����鿴�����������ռ�õ��ֽ��� 
//�۲�ͬ�������͵������ʽ 
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
    printf("%.1f\n",b);//%�������Ҫ������С��λ�� 
    printf("%.13lf",c);
} 

