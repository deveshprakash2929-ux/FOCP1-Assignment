#include<stdio.h>

int main() {
    int n, i, j, flag, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 2)
            continue;

        flag = 0;
        for(j = 2; j <= arr[i] / 2; j++) {
            if(arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            count++;
    }

    printf("\nTotal prime numbers in array: %d\n", count);
    return 0;
}
