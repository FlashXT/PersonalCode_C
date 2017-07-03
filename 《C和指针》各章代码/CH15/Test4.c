#include <stdio.h>
void main(){
	char str[9];
	int ch, count,i;
	FILE *fp=fopen("text3.txt","r");
	if(fp==NULL){
		printf("File cannot open!\n");
	    return ;
	}
	count=0;
	do{
		i=0;
		printf("%06o:",count*8);
		do{
			ch=fgetc(fp);
			printf("%4d",ch);
			if(ch<' '||ch>'~') str[i]='#';
			else str[i]=ch;
			if(i++==8) break;
			
		}while(ch!=EOF);
		str[i]='\0';
		for(;i<=8;i++) printf("    ");
		printf("  %s\n",str);
		count++;
	}while(ch!=EOF);
	fclose(fp);
} 
