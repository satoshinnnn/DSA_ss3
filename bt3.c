
#include <stdio.h>
#include <stdlib.h>

// Viết hàm tính trung bình cộng số chẵn trong mảng
// Thực hiện nhập vào n phần tử trong mảng
// Gọi hàm tính trung bình cộng số chẵn
// In kết quả ra màn hình
// Giải phóng bộ nhớ cấp phát động

int main() {
    int n;
    printf("Enter number of elements in array:");
    scanf("%d", &n);

    if (n<=0) {
        printf("Invalid Input");
        return 1;
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

    int sum=0;
    int countEven=0;

    // số chẵn
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            countEven++;
        }
    }

    int averageEven = sum / countEven;

    printf("The sum of the even elements is %d", averageEven);

    free(arr);
}




