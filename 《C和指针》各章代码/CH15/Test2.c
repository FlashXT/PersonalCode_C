#include <stdio.h>
void main(int argc,char **argv[]){
	int ch;
	FILE *fp;

	fp=fopen("testWR.txt","w");
	if(fp==NULL)
	{
	  printf("The flie <%s> can not be found.\n",argv[1]);
	  return ;
	}
	
    if(fputc('S',fp)!=EOF)
         printf("Write Success!\n");
    fclose(fp);
    fp=fopen("testWR.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=getc(fp);
	}
	fclose(fp);
	  
}
