#include<stdio.h>
int main(){
    int radius , pie = 3.14 , height= 4 , area;
    printf("input your radius:\n"); 
    scanf("%d",&radius);
    area = pie * radius * radius * height; // for circle we use pie*r^2 / no need to take height as input because i already assigned the value of h;
    printf("The area of cylinder is %d",area);
    return 0;
    

}