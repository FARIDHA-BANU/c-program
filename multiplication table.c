#include<stdio.h>

void main() {
    int n, limit, i = 1;
    scanf("%d %d", &n, &limit);
    while(i <= limit) {
        printf("%d*%d=%d\n", n, i, n * i);
        i++;
    }
    printf("\n");
}
