//CH8_Coding_2  2016.9.2
#include <stdio.h>
#include <limits.h>
void main(){
    float single_tax(float income);
    printf("%.2f\n",single_tax(23350));
} 

float single_tax(float income){
	
	int Sphere[5]={0,23350,56550,117950,256500};
	float Base[5]={0,3502.50,12798.50,31832.50,81710.50};
	float Rate[5]={0.15,0.28,0.31,0.36,0.396};
	int i=0;
	for(i=4;;i--){
		if(income>=Sphere[i]) break;
	} 
	return (income-Sphere[i])*Rate[i]+Base[i];
}
