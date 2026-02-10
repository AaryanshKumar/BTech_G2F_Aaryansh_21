#include <stdio.h>
 int main (){
     int num;
     printf("\n Enter the number: ");
     scanf("%d",num);
     if (num%2==0){
            printf("%d is even.",num);
     }
     else {
          printf("%d id odd.",num);
     }
    
     return 0;
 }