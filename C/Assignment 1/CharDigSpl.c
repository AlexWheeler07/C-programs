#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    // Otherwise, it's a special character
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
