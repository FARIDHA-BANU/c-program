#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    printf("\n");
    return 0;
}
