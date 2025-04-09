#include "../headers/matrix.h"

int eq_matrix(matrix_t *A, matrix_t *B){
    int answer = FAILURE;

if(A->rows == B->rows && A->columns == B->columns){
    answer = SUCCESS;
    for(int i = 0; i < A->rows; i++){
        for(int j = 0; j < A->columns; j++){
            if(fabs(A->matrix[i][j]-B->matrix[i][j])>1e-07){
                answer = FAILURE;
                break;
            }
        }
    }
}

return answer;
}