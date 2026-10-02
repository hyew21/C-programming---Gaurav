#include<stdio.h>
#include<conio.h>
int main(){
    int num, sum=0,temp, digit;
    printf("Input any number:\n");
    scanf("%d",&num);  
    temp=num;
    while(temp>0){
    digit = temp % 10;
     sum += digit*digit*digit;
    temp = temp/10;
    }
if (num==sum)
{
    printf("Its is armstrong:\n");
}
else
printf("it is not armstrong:\n");
return 0;
}