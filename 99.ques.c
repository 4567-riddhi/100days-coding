#include <stdio.h>

int main() {
    int day, year;
    char month[] = "Apr";

    printf("Enter day and year (format: dd yyyy): ");
    scanf("%d %d", &day, &year);
    printf("%02d-%s-%d\n", day, month, year);
    
    return 0;
}
