#include <stdio.h>

void main() {
    int n, count = 0;
    scanf("%d", &n);
    while (n != 0) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n - 1;
            count++;
        }
    }
    printf("%d", count);
}
