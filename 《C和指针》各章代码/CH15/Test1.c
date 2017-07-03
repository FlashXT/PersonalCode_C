#include <stdio.h>
void main(){
	FILE *fp=fopen("testWR.txt","w");
	if(fp= fopen("testWR.txt","w")==NULL)
	 {
	 	printf("文件不存在！！");
		 exit(1); 
	 }
	fclose(fp);
}

