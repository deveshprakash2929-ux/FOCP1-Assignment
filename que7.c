#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print first half pattern
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 1 : 0);
        }

        // Print spaces in the middle
        int spaces = rows - i;
        for (int s = 1; s <= spaces; s++) {
            printf("  "); // two spaces for better alignment
        }

        // Print second half pattern
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 1 : 0);
        }

        printf("\n");
    }

    return 0;
}