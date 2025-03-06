#include <stdio.h>

int main() {
    char character;
    int asciiValue;
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("The ASCII code of %c is %d\n", character, character);
    printf("Enter an ASCII code (0-127): ");
    scanf("%d", &asciiValue);
    printf("The character for ASCII code %d is %c\n", asciiValue, asciiValue);

    return 0;
}
