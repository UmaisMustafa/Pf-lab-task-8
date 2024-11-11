#include<stdio.h>
int main(){
	
	int temp=0;
	int matrix[4][4];
	
	for(int i = 0;i<4;i++){
		for(int j =0;j<4;j++){
		printf("enter matrix[%d][%d]: ",i+1,j+1);
		scanf("%d",&matrix[i][j]);
		}
	}
	for (int j = 0; j < 4; j++) {   
        for (int i = 0; i < 4 - 1; i++) {   
            for (int k = i + 1; k < 4; k++) {  
                if (matrix[i][j] > matrix[k][j]) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }
	printf("Scores in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
	
}

