#define M 4//评委人数 
#define N 2 //选手人数 
#include <stdio.h>
typedef struct {
	int place;
	double score;
}Data;
void main() {
	double AveScore(double[]);//函数声明 
	Data d[N];
	double Player[N][M];
	int i=0,j=0;
	//利用双层循环，分别为每位选手打分；打完分后计算平均分； 
	for(i=0;i<N;i++){
		printf("请为第%d位选手打分:\n",i+1); 
		for(j=0;j<M;j++){
			scanf("%lf",&Player[i][j]);
		}
		MPPX(Player[i],M);
		d[i].place=i;
		d[i].score=AveScore(Player[i]);
	}
	MPPX2(d,N);
	printf("选手号\t最终得分\n");
	for(i=0;i<N;i++){
	
	printf("%2d\t%2f\n",d[i].place+1,d[i].score);
	}
    getchar();	
}

double AveScore(double score[]){
	int i=0;
	double sum=0,ave=0;
	for(i=1;i<M-1;i++)
	{
		sum=sum+score[i];
	}
	return  ave=sum/(M-2);
}


int  MPPX(double arr[],int length){
	int i,j;
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1;j++){
			double temp;
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return 0;
}
int  MPPX2(Data arr[],int length){
	int i,j;
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1;j++){
			Data temp;
			if(arr[j].score<arr[j+1].score){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return 0;
}

