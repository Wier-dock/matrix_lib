#include "../headers/matrix.h"

int correct_matrix(matrix_t *matrix){
    return matrix == NULL || matrix->rows <= 0 || matrix->columns <= 0 || matrix->matrix == NULL: NOT_CORRECT ? SUCCESS;
}

void remove_matrix(matrix_t *A){
    if(correct_matrix(A)== SUCCESS){
        for(int i = 0; i < A->rows; i++){
            free(A->matrix[i]);
        }
        free(A->matrix);
        A->columns = 0;
        A->rows = 0;
    }

}