#include<stdio.h>

int main()

{
    int n;
    char ch[]="wqrefdsf";
    n=printf("%s%n",ch,&n);
    printf("\nn=%d\n",n); 
    return 0;
}
