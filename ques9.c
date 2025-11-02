#include<stdio.h>

int main() {
    int marks[10];
    int i, got = 0;

    printf("Enter 10 marks:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < 10; i++) {
        if(marks[i] == 99) {
            printf("99 found at position %d\n", i + 1);
            got = 1;
            break;
        }
    }

    if(got == 0) {
        printf("99 not present in the list.\n");
    }

    return 0;
}
