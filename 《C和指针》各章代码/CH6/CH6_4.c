#include <stdio.h>
void main(){
    int i[10];
	int *p=&i[0];
    int offset;
    printf("%2d\n",p);
    printf("%2d\n",&i[0]);
     printf("%2d\n",offset);
	p+=offset;
	p+=3;
	printf("%2d\n",p);
	getch();
} 
