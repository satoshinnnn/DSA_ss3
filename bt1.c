//
// Created by Admin on 17/06/202
/*
* Xây dựng chương trình nhập vào một mảng số nguyên có n phần tử với (0 < n <= 100)
Tìm ra phần tử có giá trị lớn nhất trong mảng
 */
#include <stdio.h>
#include <stdlib.h>

// sử dụng cấp phát động
// nhập vào giá trị các phân tử trong mảng
// in ra màn hình các phần tử trong mảng
// giải phóng bộ nhớ cấp phát động

int main() {
    int n;
    printf("Enter number of elements:");
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

    for (int i = 1; i < n; i++) {
        printf("tai vi tri %d la %d\n", i+1, arr[i]);
    }

    free(arr);

    return 0;
}



