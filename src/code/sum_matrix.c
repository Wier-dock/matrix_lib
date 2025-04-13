#include "../headers/matrix.h"

int sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result = matrix_t *A[i][j] + matrix_t *B[i][j];  
        }
    }
    
    return result; 
}

