#include<stdio.h>
int main(){
   int principal = 200 , time = 3 , rate = 2 , interest; //variable is a name of memory locations
   interest = principal * time * rate / 100 ; // I assigned the value in variable directly thats not a big deal new programmers
   printf("The simple interest is : \n %d", interest); // %d is format specifier
   return 0;
}