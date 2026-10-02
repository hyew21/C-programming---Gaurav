#include<stdio.h>
void main()
{
int a=5,b=4,temp;
temp=a;
a=b;
b=temp;
printf("Variables swaped successfull: a = %d , b = %d ", a , b);
}