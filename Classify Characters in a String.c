#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    printf("\nVowels: ");
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", str[i]);
        }
    }

    printf("\nConsonants: ");
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z') &&
            !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            printf("%c ", str[i]);
        }
    }

    printf("\nDigits: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            printf("%c ", str[i]);
        }
    }

    printf("\nSpecial Characters: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != ' ' && str[i] != '\n') {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
