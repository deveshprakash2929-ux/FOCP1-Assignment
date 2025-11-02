#include<stdio.h>

int main() {
    int arr[100], n, i, pos, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nWhere do you want to delete?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        pos = 0;
    else if(choice == 2)
        pos = n / 2;
    else if(choice == 3)
        pos = n - 1;
    else {
        printf("Invalid choice!");
        return 0;
    }

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
