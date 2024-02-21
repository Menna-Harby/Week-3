#include <stdio.h>

int main()
{
    float eng1, phy1, chem1, math1, comp,production; 
    float total, average, percentage;

    printf("Enter marks of eng1: \n");
    scanf("%f", &eng1);

    printf("Enter marks of phy1: \n");
    scanf("%f", &phy1);

    printf("Enter marks of chem1: \n");
    scanf("%f", &chem1);

    printf("Enter marks of math1: \n");
    scanf("%f", &math1);

    printf("Enter marks of comp: \n");
    scanf("%f", &comp);

    printf("Enter marks of production: \n");
    scanf("%f", &production);


    total = eng1 + phy1 + chem1 + math1 + comp +production ;
    average = total / 6.0;
    percentage = (total / 600.0) * 100;


    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}