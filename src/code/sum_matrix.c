#include "../headers/matrix.h"

int sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result){
  int sum = 0;
    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
            sum += matrix_t[i][j];  
        }
    }
    
    return sum; 
}

