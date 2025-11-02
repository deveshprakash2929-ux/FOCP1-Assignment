#include<stdio.h>

int main(){
    int terms, first = 0, second = 1, next;

    printf("Enter no. of terms = ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");

    for(int i=1; i<=terms;i++){
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}