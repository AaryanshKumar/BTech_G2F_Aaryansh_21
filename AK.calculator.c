#include <stdio.h>
 int main(){
    int num1, num2;
    char operator;

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter an Operator (+,-,*,/) : ");
    scanf(" %c", &operator);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    switch (operator) {
        case'+':
             printf("Result = %.2f", num1 + num2);
             break;
        case'-':
             printf("Result = %.2f", num1 - num2);
             break;
        case '*':
             printf("Result = %.2f", num1 * num2);
             break;  
        case '/':
           if (num2 != 0) printf("Result = %.2f", num1 / num2);
             else 
                 printf("Error! Division by zero is not allowed.");
                break;
                
                default:
                printf("Invalid operator!");
    }
    return 0;
 }