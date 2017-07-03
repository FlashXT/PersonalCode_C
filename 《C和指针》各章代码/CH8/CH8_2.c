#include <stdio.h>
void main(){
	char const *keyword[]={
	     "do",
	     "for",
	     "if",
	     "return",
	     "switch",
	     "while"	
    };
    int N=sizeof(keyword)/sizeof(keyword[0]);
    printf("%2d\t",N);
}
int lookup_keyword(char const * const desire_word,char const *keyword_table[],int const size){
	
}
