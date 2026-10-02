#include<stdio.h>
void main()
{
    int num , rev=0 , rem ;
    printf("enter a number to check if it is palindrome or not : \n ");
    scanf("%d", &num);
    int num1 = num;
    while ( num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    {
    printf(" The reverse of a entered number is: \n %d",rev);

    if ( rev == num1  ){
        printf(" It is palindrome: ");
    }
    else
    {
        printf(" It is not palindrome: ");
    } 
    }
} 