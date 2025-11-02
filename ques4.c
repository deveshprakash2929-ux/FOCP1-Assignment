#include<stdio.h>

// WE ARE GOING TO SWAP TWO NUMBERS BY THE FOLLOWING GIVEN 4 METHODS:
// 1.arithmetic 2.bitwise XOR 3.pointer manipulation 4.temporary variable.

void swap_arithmetic(int num1, int num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nUSING ARITHMETIC METHOD: Number 1=%d & Number 2=%d", num1, num2);
}

void swap_xor(int num1, int num2){
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("\nUSING BITWISE XOR METHOD: Number 1=%d & Number 2=%d", num1, num2);
}

void swap_pointer(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("\nUSING POINTER MANIPULATION METHOD: Number 1=%d & Number 2=%d", num1, num2);
}

void swap_temp(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nUSING TEMPORARY VARIABLE METHOD: Number 1=%d & Number 2=%d", num1, num2);
}

int main(){
    int num1, num2;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);

    swap_arithmetic(num1, num2);
    swap_xor(num1, num2);
    swap_pointer(&num1, &num2);
    swap_temp(num1, num2);

    printf("\nValues after swapping is Number 1=%d and Number 2=%d", num1, num2);
    return 0;
}