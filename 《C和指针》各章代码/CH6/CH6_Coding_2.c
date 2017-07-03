#include <stdio.h>

void main(){
    int del_subchar(char *,char const *);	

	char source[6]="ABDCEF";
	char  chars[6]="DCH";
	char *sour=source;
	char const *cha=chars;
    printf("%2d\n",del_subchar(sour,cha));
    for(;*sour!='\0';)
      printf("%c",*sour++);
}

int del_subchar(char *str,char const *substr){
	if(str!=NULL&&substr!=NULL){
         char *p=str;
		 char *q; 
		 for(;*p!='\0';p++){
		 	int con=0;
		 	for(q=substr;*q!='\0';q++){
		
		 		if(*p==*q) {
		 		   char *pp=p;
				   while(*q!='\0'){
				   	if(*++pp!=*++q) break;
				   } 
				   if(*q=='\0'){
					   	con=pp-p;
					    if(con!=0){
					 	int i;
					 	for(i=0;i<con;i++)
					 	  *p++=*(p+1);
					 	*p++='\0';	
					 	return 1;
					   }
			 	   }
				 }
					
			 } 	 
		 }  
		 return 0;	 	 
	}
	return 0;
}
