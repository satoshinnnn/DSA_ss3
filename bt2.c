#include <stdio.h>
#include <stdlib.h>

// Cấp phát bộ nhớ động cho mảng
// Nhập vào các phần tử trong mảng
// Tìm số lớn nhất trong mảng
// In ra số lớn nhất đã tìm được
// Giải phóng bộ nhớ cấp phát

int main() {
    int n;
    printf("Enter number of elements in array:");
    scanf("%d", &n);

    if (n<=0) {
        printf("Invalid Input");
        return 0;
    }

    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max;

    for (int i = 0; i < n-1; i++) {
        max = arr[i];
        if (arr[i] < arr[i+1]) {
            max =arr[i+1];
        }
    }

    printf("The maximum element is %d", max);

    free(arr);
}




