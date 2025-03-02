#include <stdio.h>

int main() {
    int num = 1;

start:
    if (num <= 10) {
        printf("%d\n", num);
        num++;
        goto start;
    }

    return 0;
}
