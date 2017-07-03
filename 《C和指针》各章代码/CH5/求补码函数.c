//Çó²¹º¯Êı 
 short int ChanYM(short int original){
	int k=sizeof(short int)*8;
	int n=original;
	int num2=original;
	n>>=k-1;
	int m=n&1;
	int b=1;
    int sum=1;
	if(m==1){
		int i=0;
		while(i<=15){
			if(b&num2)	break;
			num2>>=1;
			i++;
		}
		printf("%2d\n",i);
        int j=0;       
        b<<=i;
	   for(i=i+1;i<15;i++){
	   	  b<<=1;
            if(original&b)  original-=b;
            else        original+=b;
	   }
	   	printf("%2d\n",i);
	} 
    return original;
}
