#include <stdio.h>

int main() {
    int num1, num2, num3, biggest;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        biggest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        biggest = num2;
    } else {
        biggest = num3;
    }

    printf("The biggest number is: %d\n", biggest);

    return 0;
}
