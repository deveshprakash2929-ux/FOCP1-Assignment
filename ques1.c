#include<stdio.h>

int main() {
    int number, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &number);
  
    temp = number;

    while (temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == number)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");

    return 0;
}
