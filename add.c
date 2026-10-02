#include<stdio.h>

int main(){
    int a,b,c;
    printf("Input two numbers from user");
    scanf("%d%d",&a,&b);
    printf("\nsum,\nsubtract,\nmultiply,\ndivide is: \n%d\n%d\n%d\n%d", a+ b , a-b , a*b , a/b);
    return 0;
}