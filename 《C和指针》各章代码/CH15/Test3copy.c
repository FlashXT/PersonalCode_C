#include <stdio.h>
void main(int argc,char **argv){
	int ch;
	FILE *in,*out,*fp;
//	in=fopen(*argv[2],"w");
//	out=fopen(*argv[1],"r");
	in=fopen("test2","w");
	out=fopen("test1","r");
	if(in==NULL||out==NULL)
	 {
	 	printf("文件不存在！\n");
	 	return ;
	 }
	 
	 ch=fgetc(out);
	 while(ch!=EOF){
	 	fputc(ch,in);
	 	ch=fgetc(out);
	 	
	 }
	 fclose(in);
	 fclose(out);
	 
	 printf("写入成功！\n");
//	 getch(); 
	 
//	 fp=fopen(*argv[2],"r");
     fp=fopen("test2","r");
	 ch=fgetc(fp);
	 while(ch!=EOF){
	 	  putchar(ch);
	 	  ch=fgetc(fp);
	 }
	 fclose(fp);
}
