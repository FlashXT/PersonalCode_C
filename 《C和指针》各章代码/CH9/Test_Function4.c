#include <stdio.h>
#include <string.h>
void main(){
	char str[]="abc,de,fgh";
	char *arr[3];
	arr[0]=strtok(str,",");
	printf("%s\n",arr[0]);
	int i=0;
	while(i++,arr[i-1]!=NULL){
		arr[i]=strtok(NULL,",");
		printf("%s\n",arr[i]);
	}
}
