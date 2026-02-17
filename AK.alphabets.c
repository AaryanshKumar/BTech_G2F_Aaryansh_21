#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character : ");
    scanf(" %c", &ch);  // space before %c avoids input issue

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

            printf("It is a Vowel");

        } else {
            printf("It is a Constant");
        }

    } else {
        printf("Invalid input! Please enter an Alphabet.");
    }

    return 0;
}