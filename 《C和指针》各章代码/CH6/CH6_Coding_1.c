#define NULL 0
#include <stdio.h>

void main(){
    char * find_char(char *,char const *);	

	char source[6]="ABDCEF";
	char  chars[6]="MRQCDF";
	char const *sour=source;
	char const *cha=chars;
    printf("%2d",find_char(sour,cha));
}

char * find_char(char  *source,char const *chars){
	if(source!=NULL&&chars!=NULL){
         char *p=source;
//		 char *q=chars; 
		 for(;*p!='\0';p++){
		 	//����forѭ���ĵ�һ����������ʡ�ԣ�
		    //���forÿִ��һ�Σ�qҪ��ͷ��ʼ���� 
		 	for(q=chars;*q!='\0';q++)
		 		if(*p==*q) return p;	
		 }	 
	}
	return NULL;
}
//�𰸴��� 
char * find_char( char const *str, char const *chars ) { 
    char *cp;
    if( str != NULL && chars != NULL ){
       for( ; *str != ��\0��; str++ ){
       for( cp = chars; *cp != ��\0��; cp++ ) 
	        if( *str == *cp )   
			   return str;
			   }
    }
    return NULL;
}



