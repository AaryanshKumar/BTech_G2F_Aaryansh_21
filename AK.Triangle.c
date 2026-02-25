#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity using triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {

        printf("It is a Valid Triangle.\n");

        // Check type of triangle
        if (a == b && b == c) {
            printf("Type: Equilateral Triangle");
        }
        else if (a == b || b == c || a == c) {
            printf("Type: Isosceles Triangle");
        }
        else {
            printf("Type: Scalene Triangle");
        }

    } 
    else {
        printf("The given sides do NOT form a valid triangle.");
    }

    return 0;
}
