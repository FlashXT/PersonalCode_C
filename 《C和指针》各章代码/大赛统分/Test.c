#define M 3 //评委人数 
#define N 2//选手人数  

#include<stdio.h>

void main(){
	void Input_Score(double[N][M]);//写在main()函数之后的函数，使用前一定要声明！！！ 
	double Player[N][M];
	Input_Score(Player);
}

void Input_Score(double P[N][M]){
	int i=0,j=0;
	for(i=0;i<N;i++){
		printf("请为第%d位选手打分:\n",i+1); 
		for(j=0;j<M;j++){
			scanf("%2f",&P[i][j]);
		}
	printf("打分完毕！\n");
	}
}
