#include <stdio.h>
#include<conio.h>
int main() {
    float dollars, rupees, pounds;
    printf("Enter dollars($):");
    scanf("%f", &dollars);
    rupees = dollars * 48.0;
    pounds = rupees / 70 ;
    printf("%.2f is %.2f", dollars,pounds);
    return 0;
}