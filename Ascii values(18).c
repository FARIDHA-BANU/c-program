#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("ASCII of %c is %d\n", ch, ch);
    } else {
        printf("Not a vowel\n");
    }

    return 0;
}
