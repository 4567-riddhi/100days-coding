#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int matrix[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int line = 0; line < 2 * n - 1; line++) {
        int start_row = (line < n) ? 0 : line - n + 1;
        int start_col = (line < n) ? line : n - 1;
        int i = start_row, j = start_col;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
