#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, num = 1;

    printf("Enter the number of odd terms: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;
        num += 2;  
        count++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}










    
        
    

