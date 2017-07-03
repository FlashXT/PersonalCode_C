#include <stdio.h>
#include <string.h>
void main(){
	void print_tokens(char *line);
	char str[]="adc,de,fgh";
	 print_tokens(str);
} 

void print_tokens(char *line){
	char *token;
	for(token=strtok(line,",");token!=NULL;token=strtok(NULL,",")){
		  printf("Next token is %s\n",token);
		
	}
	  
}
