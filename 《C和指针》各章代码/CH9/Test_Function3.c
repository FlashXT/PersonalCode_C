#include <stdio.h>
void main(){
	char buffer[]="142,330,Smith,j,239-4123";
	int k=strcspn(buffer,"142");
	printf("%d\n",k);
	printf("\v");
}
