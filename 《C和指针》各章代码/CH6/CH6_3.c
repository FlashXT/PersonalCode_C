//指针访问数组变量 
#include<stdio.h> 
void main(){
	int i=0;
	char ch[3]="abc";
	char *cp=ch;
	for(i=0;i<3;i++){
		printf("%2c",*cp++);
	}
	 
//	char *cp;
//	printf("%d\n",cp++);
//	printf("%d\n",cp++);
	
	getch();
	
	
	
} 
