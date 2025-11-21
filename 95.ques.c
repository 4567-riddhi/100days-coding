#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j;
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
    for (i = 0; i < len1; i++)
        temp[i] = str1[i];
    for (j = 0; j < len1; j++)
        temp[i + j] = str1[j];
    temp[i + j] = '\0';

    for (i = 0; i <= 2 * len1 - len2; i++) {
        int match = 1;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("Rotation\n");
            return 0;
        }
    }
    printf("Not rotation\n");
    return 0;
}
