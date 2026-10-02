#include<stdio.h>
#include<conio.h>
int main(){
    int num ,rev=0,rem;
    printf("input enter a number:\n");
    scanf("%d",&num);
    int num1 = num;
    while (num>0)
    {
    rem = num % 10;
    rev = rev*10 + rem;
    num = num/10;
    }
    if (rev==num1){
    printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }


}