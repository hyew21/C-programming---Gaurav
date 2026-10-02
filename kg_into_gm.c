#include<stdio.h>
#include<conio.h>
int main()
{
    float kg,gm;
    printf("enter your kg");
    scanf("%f",&kg);
    gm = 1000 * kg;
    printf("%.2f gm is equal %.2f kg",kg,gm);
    return 0;
}