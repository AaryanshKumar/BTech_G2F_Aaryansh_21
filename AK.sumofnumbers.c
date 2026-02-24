#include <stdio.h>
 int main () {
     int n, sum;
     printf("Enter a Number : ");
     scanf("%d", &n);

     sum = n * (n+1) / 2;

     printf("Sum of numbers from 1 to %d = %d", n, sum);

     return 0;
 }