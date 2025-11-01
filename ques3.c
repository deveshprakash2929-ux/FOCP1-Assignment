#include<stdio.h>

int subBitwise(int n1, int n2) {
    while (n2 != 0) {
        int borrow = (~n1) & n2;
        n1 = n1 ^ n2;
        n2 = borrow << 1;
    }
    return n1;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result after subtraction: %d\n", subBitwise(num1, num2));

    return 0;
}
