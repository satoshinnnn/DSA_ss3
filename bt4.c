#include <stdio.h>
#include <stdlib.h>

// Viết chương trình nhập vào số hàng (rows) và số cột (cols) với
//
// (0 < rows < 1000 và 0 < cols < 1000)
//
// Yêu cầu:
//
// Viết hàm tìm số lớn nhất trong mảng 2 chiều
// Viết hàm tìm số nhỏ nhất trong mảng 2 chiều
// Nhập vào các phần tử trong mảng
// Thực hiện gọi hàm tìm số lớn nhất và nhỏ nhất
// In kết quả ra màn hình

void findMaxMin (int row, int col,int arr[row][col]) {
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j]>max) {
                max=arr[i][j];
            }
            if (arr[i][j] < min) {
                min=arr[i][j];
            }
        }
    }
    printf("the maximum element is %d\n the min element is %d",max, min);
}

int main() {
    int row;
    int col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    if (row < 0 || col <0) {
        printf("Invalid Input");
        return 0;
    }

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the element of row %d, col %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    findMaxMin(row, col, arr);

}




