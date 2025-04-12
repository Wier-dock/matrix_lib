#include "../headers/matrix.h"

void sub_matrix(int **matrix, int start_row, int start_col, int rows, int cols, int **result) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix[start_row + i][start_col + j];
        }
    }
}