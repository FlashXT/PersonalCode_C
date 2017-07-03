#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * strup(char const *string){
	
	char *new_string;
	new_string=malloc(strlen(string)+1);
	if(new_string!=NULL)
	    strcpy(new_string,string);
	    
	return new_string;
	
}
