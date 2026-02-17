#include <stdio.h>
#define PI 3.14

 int main (){
    float radius, area, circumference;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("area of the Circle = %.2f\n", area);
    printf("circumference of the Circle = %.2f", circumference);

    return 0;
 }