#include <stdio.h>
void main(){
	FILE *fp=fopen("testWR.txt","w");
	if(fp= fopen("testWR.txt","w")==NULL)
	 {
	 	printf("�ļ������ڣ���");
		 exit(1); 
	 }
	fclose(fp);
}

