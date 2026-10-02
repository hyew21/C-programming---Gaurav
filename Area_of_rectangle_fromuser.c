#include<stdio.h>
int main(){
    int l,b,area; // l is the length and b is the breadth
    printf("enter your length and breadth",l,b);
    scanf("%d%d",&l,&b); // memory allocations of the variable where input is taken by user
    area = l * b;
    printf("The area of a rectangle is %d",area);
    return 0;
}