#include<stdio.h>

int main() {
    int arr[100], n, i, choice, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter element to insert: ");
    scanf("%d", &element);

    printf("Where to insert?\n1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        pos = 0;
    else if(choice == 2)
        pos = n / 2;
    else if(choice == 3)
        pos = n;
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("\nArray after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
