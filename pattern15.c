#include<stdio.h>

void main() {
    for(int b = 5; b >= 1; b--) {
        for(int k = 1; k <= b - 1; k++) {
            printf(" ");
        }
        for(int a = b; a <= 5; a++) {
            printf("%d", a);
        }
        printf("\n");
    }
}
