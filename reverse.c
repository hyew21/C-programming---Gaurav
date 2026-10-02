#include<stdio.h>
void main()
{
    int num,rev = 0,rem;
    printf("Enter a number you want to do reverse of :\n");
    scanf("%d",&num);
    while (num>0)
    {
     rem = num % 10 ;
     rev = rev *10 + rem;
     num = num / 10 ;
    }
    
   printf(" the reverse of a entered number is %d",rev);
}