#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("Enter a number");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Negative number doesnot have a facotrial:\n");
    }
    else
    {
        for (int i=1;i<=n;++i)
        {
            fact = fact * i;
        }
    printf("The factorial of a number is %d", fact);
    }
return 0;
} 