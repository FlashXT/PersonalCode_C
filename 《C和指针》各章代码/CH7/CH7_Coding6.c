#include <stdio.h> 
#include <string.h>
static char *digits[]={"","ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ",
                          "SEVEN ","EIGHT ","NINE ","TEN ","ELEVEN ","TWELVE ",
						  "THIRTEEN ","FOURTEEN ","FIFTEEN ","SIXTEEN ","SEVENTEEN ",
						  "EIGHTEEN ","NINETEEN "
					  };
static char *tens[]={ " "," ","TWENTY ","THIRTY ","FORTY ","FIFTY ","SIXTY ","SEVENTY ",
                            "EIGHTY ","NINETY "
                    };
static char *magnitudes[]={" "," ","THOUSAND ","MILLION ","BILLION "};


int count=0;
       	 
void main(){
    void GroupOfThree( unsigned int amount, char *buffer);
    void written_amount( unsigned int amount, char *buffer ); 
    int i=0;
    char buffer[1000]={'\0'};
	int amount=103056709;	
	printf("%d\n",amount);
    written_amount(amount,buffer);
    
	for(i=0;buffer[i]!='\0';i++)
	    printf("%c",buffer[i]);
	
}
void GroupOfThree( unsigned int amount, char *buffer)
       { 		  
		    if(amount>0){//显示条件很重要，否则递归无法结束 
			  
			  count++;
			  int i=count;
	          int m=amount,n=amount%1000;
//	       	  while(m>1000){
	       	     m=m/1000;
	       	  	 GroupOfThree(m,buffer);
//	       	  }
	       	  int k=n/100,q=n%100;
//	       	  printf("%d-%d-%d\n",k,q/10,q%10);
		      if(k>0){
		       	  	 	strcat(buffer,digits[k]);
		       	  	    strcat(buffer,"HUNDRED ");
					 }
	       	  k=q/10;q=q%10;
		      if(k>=2){ strcat(buffer,tens[k]);
		       	  	    if(q>0)  
							  strcat(buffer,digits[q]);
				      }     
	          else    strcat(buffer,digits[k*10+q]);
	       	  	      
				  
				 strcat(buffer,magnitudes[i]);
				 strcat(buffer,"\n");
//				 printf("count--%d\n",count);
		}
	}
void written_amount( unsigned int amount, char *buffer ) { 
    if( amount == 0 ) strcpy( buffer, "ZERO " ); 
	else {  *buffer = '\0'; 
	         GroupOfThree( amount,buffer);
	
    } 
}		 					 
