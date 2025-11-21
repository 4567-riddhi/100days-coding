#include <stdio.h>

int main() {
    int rows, cols, isSymmetric = 1;
    scanf("%d %d", &rows, &cols);
    if(rows != cols) {
        printf("False\n");
        return 0;
    }
    int matrix[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    printf("%s\n", isSymmetric ? "True" : "False");

    return 0;
}
