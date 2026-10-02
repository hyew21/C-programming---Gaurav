/*4. Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user.*/

#include<stdio.h>
int main(){
    int year;
    printf("enter your year");
    scanf("%d",&year);
    if( year%4== 0 && year%100 !=0 || year%100== 0){
        printf("It is leap year");
    }
    else{
        printf("it is not a leap year");
    }
return 0;
}