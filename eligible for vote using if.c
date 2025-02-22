#include <stdio.h>
#include <conio.h>

void main() {
    int age;
    printf("Enter the person's age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Person is eligible to vote");
    }
    printf("\nProgram end");
    getch();
}
