#include<math.h>
#include<stdio.h>
int void()
{
   /* int phy,chem,maths,eng,cs,sum;
    float percentage;

    printf("Enter the marks of all 5 subjects: ");
    scanf("%d%d%d%d%d",&phy,&chem,&maths,&eng,&cs);

    sum = phy+chem+maths+eng+cs;
    percentage = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Percentage = %.2f", percentage);*/

    float P,R,T,SI,CI;

    print("Enter principal, Rate, Time");
    scanf("%f%f%f", &P, &R, %T);
    SI=(P*R*T)/100;
    CI=P*pow((1+R/100),T)-P;
    printf("SimpleInterest=%2f\n ");
    
    return 0;  
}