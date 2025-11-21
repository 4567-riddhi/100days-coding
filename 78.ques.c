#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int matrix[100][100]; 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
