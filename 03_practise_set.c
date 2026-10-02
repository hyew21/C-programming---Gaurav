/*3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include<stdio.h>
int main(){
    float income,tax=0;
    printf("enter your income:\n");
    scanf("%f", &income);
    if (income<=250000)
    {
    printf("No need to pay tax\n");
    }
    else if (income<=500000){
        tax = 0.05 * (income-250000);
        printf("Your tax is %f\n ",tax);
    }
    else if (income<= 1000000){
        tax = 0.05*250000 + 0.2*(income - 500000);
        printf("Your tax is %f\n",tax);
    }
    else{
        tax = 0.05 * 250000 + 0.2* 500000 + 0.3*(income-1000000);
        printf("your tax is %.2f\n",tax);
        printf("Your amount after tax is %.2f",income-tax);
    }
return 0;
}
    
    