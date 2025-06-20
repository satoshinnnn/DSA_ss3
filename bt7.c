#include <stdio.h>
#include <stdlib.h>

void sumInRow(int row, int col, int arr[row][col], int k) {
    int sumRow =0;
    for (int i = 0; i < row; i++) {
        if (i==k-1) {
            for (int j = 0; j < col; j++) {
                sumRow += arr[i][j];
            }
            break;;
        }
    }
    printf("The sum of all elements in row %d is %d", k,sumRow);
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

    int k;
    printf("Enter the row wanting to sum up all elements: ");
    scanf("%d", &k);

    sumInRow(row, col, arr,k);
}




