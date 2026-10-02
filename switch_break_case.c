// Switch case and break
// if we dont use break here the it will print all below the num
// for eg if you entered a = 1 without break then it will print all cases below :
#include<stdio.h>
int main(){
    int a;
    printf("enter a: \n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Enter your number is 3: \n");
        break;
        case 2:
        printf("Enter your number is 4: \n");
        break;
        case 3:
        printf("enter your number is 5: \n");
        break;
        case 4:
        printf("enter your number is 6: \n");
        break;
        default:
        printf("Nothing is matched");
    }
    return 0;

}