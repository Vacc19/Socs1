#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[101][101];

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check rows for duplicates
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    printf("Nay\n");
                    return 0;
                }
            }
        }
    }

    // Check columns for duplicates
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            for (int k = i + 1; k < N; k++) {
                if (matrix[i][j] == matrix[k][j]) {
                    printf("Nay\n");
                    return 0; 
                }
            }
        }
    }

    printf("Yay\n");

    return 0;
}

