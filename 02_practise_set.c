/* 2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user */

#include<stdio.h>
int main(){
    int math , science , nepali;
    printf("Enter the marks in math :\n");
    scanf("%d",&math);
    printf("Enter the marks in science :\n");
    scanf("%d",&science);
    printf("Enter the marks in nepali :\n");
    scanf("%d",&nepali);
    printf("The marks are %d %d %d:\n", math , science , nepali);
    if(math<33 || science<33 || nepali<33){
        printf("you re failed due to less marks in individual subbject:\n");
    }
    else if ((math + science + nepali)/3 < 40)
    {
        printf("your are failed due to percentage");
    }
    else{
        printf("your are passed ! \n");
    }
return 0;
}