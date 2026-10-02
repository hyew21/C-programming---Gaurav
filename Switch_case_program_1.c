//Write a program to find grade of a student given his marks based on below:
/* Marks Range
90 – 100 ⇒ A
80 – 90 ⇒ B
70 – 80 ⇒ C
60 – 70 ⇒ D
50 – 60 ⇒ E
<50 ⇒ F
Some Important Notes
We can use switch-case statements even by
writing cases in any order of our choice (not
necessarily ascending).
char values are allowed as they can be easily
evaluated to an integer.
A switch can occur within another but in
practice this is rarely done.
*/
#include<stdio.h>
int main (){
    int marks;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    if ( marks >= 90 && marks <= 100){
        printf(" The grade is A:\n");

    }
    else if ( marks >= 80 && marks <= 90){
        printf(" The grade is B:\n");
    }
    else if ( marks >= 70 && marks <= 80){
        printf("The grade is C:\n");
    }
    else if ( marks >=50 && marks <= 60 ){
        printf("The grade is D:\n");
    }
    else if ( marks < 50){
          printf(" The grade is F:\n");
    }
    
return 0;
}