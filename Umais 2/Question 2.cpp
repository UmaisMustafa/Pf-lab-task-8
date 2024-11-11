#include <stdio.h>

int main() {
    int studentgrade[4][4]; 

    
    for (int i = 0; i < 4; i++) {
        printf("For student %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Enter grade %d of student %d: ", j + 1, i + 1);
            scanf("%d", &studentgrade[i][j]);
        }
    }

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (studentgrade[i][j] < 0) {
                studentgrade[i][j] = 0; 
            }
        }
    }

    
    printf("\nUpdated grades for the students:\n");
    for (int i = 0; i < 4; i++) {
        printf("For student %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", studentgrade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
