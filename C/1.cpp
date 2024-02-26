#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Ðoi dau ">"
                // hoán doi gia tri
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    
    // khai bao n phan tu
    int arr[n];
    
    // nhap du lieu vao mang
    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    // sap xep mang theo chieu giam dan
    bubbleSort(arr, n);
    
    // In ra
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

