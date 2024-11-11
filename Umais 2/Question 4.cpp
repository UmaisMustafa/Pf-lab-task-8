#include<stdio.h>
int main(){
	int n,m;
	printf("enter dimension for  two matrixs: \n");
	scanf("%d",&m);
	scanf("%d",&n);
	
	
	int matrix1[m][n];
	int matrix2[m][n];
	int sum[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter elements of matrix1[%d][%d]: ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
		printf("\n");
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter elements of matrix2[%d][%d]: ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum[i][j]= matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("Sum of the two matrices:\n");
    for (int i =0;i<m; i++) {
        for (int j =0;j<n; j++) {
            printf("sum of element[%d][%d]: %d \n",i,j,sum[i][j]);
        }
        printf("\n");
    }
}

