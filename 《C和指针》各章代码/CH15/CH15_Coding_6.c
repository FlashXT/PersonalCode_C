#include <stdio.h>
void main(){
	FILE *fp=fopen("Coding071.txt","r+");
	if(fp==NULL){
		perror(stderr);
		exit(0);
	}
	char buffer[512];
	char format[]="%d %d %d %d %d %d %d %d %d %d";
	int members=0;
	int i=0;
	int sum=0;
	char age[10]={};
	while(fgets(buffer,512,fp)!=NULL)
		{
	      members=sscanf(fp,format,age,age+1,age+2,age+3,age+4,age+5,age+6,age+7,age+8,age+9);
	      if(members==0) continue;
	      else{
	      	for(i=0;i<10;i++){
	      		sum+=age[i];
			  }
	      printf("%5.2f   %s",sum/members,buffer);
		  }
			
		}
} 
