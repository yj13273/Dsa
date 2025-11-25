/*To implement a sparse matrix using arrays by reading a 2D matrix from the user, storing only its non-zero elements in an array of structures, and printing the resulting sparse matrix representation.*/

#include <stdio.h>

struct Sparse{
    int row;
    int col;
    float val;
};

int main(){
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    float arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }
    struct Sparse s[m*n];
    int k = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] != 0){
                s[k].row = i;
                s[k].col = j;
                s[k].val = arr[i][j];
                k++;
            }
        }
    }
    for (int i = 0; i < k; i++){
        printf("Row: %d, Col: %d, Val: %d\n", s[i].row, s[i].col, s[i].val);
    }
    return 0;
}