#include<stdio.h>
void main(){
	void deblank(char []);
	char str[]="ABCC   D       EFG";
	deblank(str);
	Print_Array(str);
} 
void deblank(char str[]){
	char temp;
	int index=0;
	while(str[index]!='\0'){
	
		if(str[index]==' '){
			
			while(str[index+1]==' '){
				
				    int flag=index+1;
					while(str[flag]!='\0'){
						str[flag]=str[flag+1];
						flag++;
					}
		    }
		}
	   
	  	index++;   
	}
}

int Print_Array(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++)
      printf("%2c",str[i]);
	
} 
