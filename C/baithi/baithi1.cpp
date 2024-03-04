#include <stdio.h>

int findSmallPos(int arr[], int n) {
    int smallPos = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && (smallPos == -1 || arr[i] < smallPos)) {
            smallPos = arr[i];
        }
    }

    return smallPos;
}

int main() {
    int n;

    printf("Enter the number of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Array [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int small = findSmallPos(arr, n);

    if (small != -1) {
        printf("The smallest positive number is: %d\n", small);
    } else {
        printf("There is no positive number in the array.\n");
    }

    return 0;
}
