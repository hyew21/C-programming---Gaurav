#include<stdio.h>
void main(){
    int a , b ;
    printf("Input a number");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is the greatest",a);
    }
    else if (b>a)
    {
         printf("%d is the greatest ",b);
    }
    else
    {
         printf (" Both terms are  equal"); 
    }
}