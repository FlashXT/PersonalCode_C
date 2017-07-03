#include <stdio.h>
 int main(){
 	float a,b,c;
 	float temp;	  
	 	scanf("%f%f%f",&a,&b,&c);
 	
 	if(a<0||b<0||c<0){ printf("Please input again!");}
    else if( a < b ){ temp = a; a = b; b = temp; } 
	else if( a < c ){ temp = a; a = c; c = temp; } 
	else if( b < c ){ temp = b; b = c; c = temp; }
	
	if( c <= 0 || b + c < a ) printf( "Not a triangle.\n" );

	else if(a==b&&a==c)           printf("Equilateral.\n");
 }
