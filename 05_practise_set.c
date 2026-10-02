/*Write a program to determine whether a character entered by the user is lowercase or
not.*/

#include<stdio.h>
int main(){
    int ch = 'A';
    printf("The character is %c\n",ch);
    printf("The character is %d\n",ch);
    if (ch>=97 && ch<=122)// here 97 to 122 are lower case . It happende due to Ascci Value of chracters
    // here 65 to 90 are upper case according to Ascci values of characters in c
    {
    printf("The character is lowercase\n");
    }
    else{
        printf("The character is upercase\n");
    }
    
return 0;
}