#include <stdio.h>
#include <stdlib.h>
void main(){
	char *p;
	
	p=calloc(100,sizeof(char));
	if(p!=NULL)
	 printf("%d\n",*p);
	 printf("%d",sizeof(*p));
	 free(p);
}
