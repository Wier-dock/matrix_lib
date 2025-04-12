#include "../headers/matrix.h"

void sub_matrix(int **matrix, int start_rows, int start_columns, int rows, int columns, int **result) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix[start_rows + i][start_columns + j];
        }
    }
}