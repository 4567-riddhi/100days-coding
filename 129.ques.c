#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);
    return 0;
}
