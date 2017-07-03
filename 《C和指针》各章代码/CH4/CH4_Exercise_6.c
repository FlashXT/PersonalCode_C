#include <stdio.h>
void main(){
	
} 
int substr(char dst[],char src[],int start,int len){
	if( start<0||len<0)
}

/*Extract the specified substring from the string in src. */ 
int substr( char dst[], char src[], int start, int len ) 
    { int srcindex; int dstindex;
      dstindex = 0;
      if( start >= 0 && len > 0 ){ 
	       /*Advance srcindex to right spot to begin, but stop if we reach the terminating NUL byte. */ 
		   for( srcindex = 0; srcindex < start && src[srcindex] !='\0'; srcindex += 1 ) ;
           /*Copy the desired number of characters, but stop at the NUL if we reach it first. */
		    while( len > 0 && src[srcindex] !='\0'){ 
			      dst[dstindex] = src[srcindex];
				  dstindex += 1; 
				  srcindex += 1; 
				  len ¨C= 1; 
			}
      }
        /*Null¨Cterminate the destination. */ 
      dst[dstindex] = ¡¯\0¡¯; 
      return dstindex;
    }
