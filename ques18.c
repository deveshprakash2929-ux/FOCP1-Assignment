#include<stdio.h>

int main() {
    int n, i, j, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid size!");
        return 0;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("None");

    printf("\n");
    return 0;
}
