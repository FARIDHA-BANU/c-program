#include<stdio.h>

void main() {
    int b, a, k;
    for(b = 1; b <= 5; b = b + 1) {
        for(k = 0; k < 5 - b; k = k + 1) {
            printf(" ");
        }
        for(a = 5; a >= 5 - b + 1; a = a - 1) {
            printf("%d", a);
        }
        printf("\n");
    }
}
