#define M 3 //��ί���� 
#define N 2//ѡ������  

#include<stdio.h>

void main(){
	void Input_Score(double[N][M]);//д��main()����֮��ĺ�����ʹ��ǰһ��Ҫ���������� 
	double Player[N][M];
	Input_Score(Player);
}

void Input_Score(double P[N][M]){
	int i=0,j=0;
	for(i=0;i<N;i++){
		printf("��Ϊ��%dλѡ�ִ��:\n",i+1); 
		for(j=0;j<M;j++){
			scanf("%2f",&P[i][j]);
		}
	printf("�����ϣ�\n");
	}
}
