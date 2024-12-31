#include <stdio.h>

void main() {
    int n, original, sum = 0;
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    if (original % sum == 0) {
        printf("Harshard Number\n");
    } else {
        printf("Not Harshard Number\n");
    }
}
