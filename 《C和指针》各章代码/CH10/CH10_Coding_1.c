#include <stdio.h>
	struct PHONE_NUMBER{
		short area;
		short exchange;
		short station;
	};
	struct  {
		short Year;
		short Month;
		short Date;
		int   Time;
		
		struct  PHONE_NUMBER Calling;
		struct  PHONE_NUMBER Called;
		struct  PHONE_NUMBER Billed;
	};

void main(){
	
	
	
} 
