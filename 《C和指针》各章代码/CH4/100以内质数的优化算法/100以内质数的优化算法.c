 #include <stdio.h>
#include<math.h>
int main(){
	int number;
	int divisor;
	int count = 1;
	printf("  2");
	for (number = 3; number <= 100; number = number + 2){
		for (divisor = 3; divisor<=(int)sqrt(number); divisor = divisor + 2){
			if (number%divisor == 0) break;

		}
		if (divisor >(int)sqrt(number))
		{
			printf("%3d", number);
			count++;
			if (count % 5 == 0) printf("\n");
		}
		
	}
	getch();
}
