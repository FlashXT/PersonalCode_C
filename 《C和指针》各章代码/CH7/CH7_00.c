//�ݹ鷨��ȡ��λ���� 
#include<stdio.h>
void main(){
    int Numbit(int n);
	Numbit(4267);
}
int Numbit(int n){
	if(n>10) 
	   Numbit(n/10);
	printf("%d\t",n%10);
} 
