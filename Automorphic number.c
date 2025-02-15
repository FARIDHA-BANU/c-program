#include <stdio.h>

void main() {
    int n, k, last, temp;
    scanf("%d", &n);
    k = n * n;
    temp = n;
    printf("%d\n", k);
    while (temp > 0) {
        last = k % 10;
        if (last != temp % 10) {
            printf("Not an automorphic number\n");
            return;
        }
        temp /= 10;
        k /= 10;
    }
    printf("Automorphic number\n");
}
