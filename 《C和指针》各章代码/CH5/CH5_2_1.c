
#include <stdio.h>

void main(){
	char encrypt(char);
	char ch;
	while(ch=getchar(),ch!=EOF){
//		if(ch>='A'&&ch<='Z')
		   ch= encrypt(ch);
//		else if(ch>='a'&&ch<='z')
//	        ch=encrypt(ch,'a');
		putchar(ch);
//		putchar(ch);
	}
    sleep(10000);
} 

char encrypt(char ch){
	ch-=65;
	ch+=13;
	ch%=26;	
	return ch+65;

}
