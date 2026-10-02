#include<stdio.h>
int main(){
    int celcius , faren; // you can assign celcius value here i.e celcius = 5 also, but we re taking input from user.
    printf("Enter celcius:\n");
    scanf("%d",&celcius);
    faren = (celcius*9/5)+32; // simple formula we used here 
    printf("The farenheit is : %d",faren); // now the calculation is stored in faren nd display on our screen.
    return 0;
}