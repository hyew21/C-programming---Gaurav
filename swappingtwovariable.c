#include<stdio.h> //Taking input from users and swapping
void main(){
    int a,b,temp;
    printf("INput your numbers");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("We swapped two variables %d %d",a,b);
}