#include<stdio.h>
int main(){
	int rowsum[3]={0,0,0},columnsum[3]={0,0,0};
	int matrix1[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("enter value at matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				rowsum[i]+=matrix1[i][j];
				columnsum[i]+=matrix1[j][i];
		}
	
		
}
	for(int i=0;i<3;i++){
				printf("sum of score of player %d is %d\n",i+1,rowsum[i]);
		}
		for(int i=0;i<3;i++){
				printf("sum of activity %d is %d\n",i+1,columnsum[i]);
		}
}

