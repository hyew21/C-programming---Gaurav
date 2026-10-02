#include<stdio.h>
#include<math.h>

int main() {
    int digit, sum =0, n, dig_count =0;
    scanf("%d", &n);
    int n1 = n;
    while(n1 > 0) {
        n1 = n1 / 10;
        dig_count += 1;
    }
    int original = n;
    while(n > 0) {
        digit = n % 10;
        sum = sum + round(pow(digit, dig_count));
        n = n / 10;
    }

    if (original == sum) {
        printf("armstrong");
    }
    else {
        printf("not an armstrong");
    }
    return 0;
}