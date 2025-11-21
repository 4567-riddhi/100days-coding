#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int matrix[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isDistinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
