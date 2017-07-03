#include <stdio.h>
void main(){
	int i,sum=0;
	FILE *fp=fopen("text10.txt","rb");
	if(fp==NULL)
     {
     	perror(stderr);
     	exit(0);
	 }	
	 for(i=0;i<10;i++) sum+=getw(fp);
	 printf("The sum is %d\n",sum);
	 fclose(fp);
}
