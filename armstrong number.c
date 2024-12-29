#include <stdio.h>

void main() {
    int n, s = 0, r;
    scanf("%d", &n);
    int a = n;
    while(n != 0) {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }
    if(a == s) {
        printf("Armstrong number");
    } else {
        printf("Not Armstrong number");
    }
}
