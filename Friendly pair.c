#include <stdio.h>

void main() {
    int num1, num2, sum1 = 0, sum2 = 0;
    scanf("%d %d", &num1, &num2);
    
    for(int i = 1; i <= num1 / 2; i++) {
        if(num1 % i == 0) {
            sum1 += i;
        }
    }

    for(int j = 1; j <= num2 / 2; j++) {
        if(num2 % j == 0) {
            sum2 += j;
        }
    }
    
    if(sum1 * num2 == sum2 * num1) {
        printf("Friendly Pair\n");
    } else {
        printf("Not Friendly Pair\n");
    }
}
