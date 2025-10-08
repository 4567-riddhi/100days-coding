#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    } else {
        printf("Invalid triangle: side lengths do not satisfy triangle inequality.\n");
    }

    return 0;
}











    
        
    

