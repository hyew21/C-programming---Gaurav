#include<stdio.h>
#include<conio.h>
int main()
{
    float gm,kg;
    printf("enter your gm");
    scanf("%f",&gm);
    kg = gm / 1000;
    printf("%.2fgm is convert into %.2f kg", gm,kg);
    return 0;

}