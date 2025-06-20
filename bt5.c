#include <stdio.h>
#include <stdlib.h>

// Viết hàm tình tổng đường chéo chính
// Viết hàm tính tổng đường chéo phụ
// Nhập vào các phần tử trong mảng 2 chiều
// Gọi hàm tính tổng đường chéo chính và đường chéo phụ
// In kết quả ra màn hình

void sumDig(int row, int col, int arr[row][col]) {
    int sumMainDig = 0;
    int sumSecondDig = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i==j) {
                sumMainDig += arr[i][j];
            }
        }
        for (int k = col-1; k >= 0; k--) {
            if (i+k==row-1) {
                sumSecondDig += arr[i][k];
            }
        }
    }
    printf("The sum of the digits of main digit is %d\nThe sum of the digits of secondary digit is %d", sumMainDig, sumSecondDig);
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

    if (row != col) {
        printf("Khong ton tai duong cheo chinh va phu");
        return 0;
    }

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the element of row %d, col %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    sumDig(row, col, arr);
}




