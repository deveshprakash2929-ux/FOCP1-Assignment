#include<stdio.h>

int main() {
    int marks[10];
    int i, count = 0;

    printf("Enter marks of 10 students:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Positions where marks are 99: ");
    for(i = 0; i < 10; i++) {
        if(marks[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if(count == 0)
        printf("\nNo student got 99.\n");
    else
        printf("\nTotal students with 99 marks = %d\n", count);

    return 0;
}
