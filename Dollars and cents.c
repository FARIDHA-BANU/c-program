#include <stdio.h>

void main() {
    int dollar1, cent1, dollar2, cent2;
    scanf("%d %d %d %d", &dollar1, &cent1, &dollar2, &cent2);

    int total_cents = cent1 + cent2;
    int total_dollars = dollar1 + dollar2 + total_cents / 100;
    total_cents = total_cents % 100;

    printf("Sum: %d dollars and %d cents\n", total_dollars, total_cents);
}
