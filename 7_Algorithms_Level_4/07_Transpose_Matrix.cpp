#include <iostream>
#include <iomanip>
using namespace std;

void fill_matrix_with_ordered_numbers(int matrix[3][3] , int n_rows , int n_cols){

    int numbers = 0;
    for (int i = 0 ; i < n_rows ; i++){

        for (int j = 0 ; j < n_cols ; j++){
            
            matrix[i][j] = ++numbers;
        }
    }
}

void transpose_matrix(int matrix[3][3] , int tran_matrix[3][3] , int n_rows , int n_cols){

    for (int i = 0 ; i < n_rows ; i++){

        for (int j = 0 ; j < n_cols ; j++){

            tran_matrix[i][j] = matrix[j][i];
        }
    }
}

void print_matrix_elements(int array[3][3] , int n_rows , int n_cols){

    for(int i = 0 ; i < n_rows ; i++) {

        for (int j = 0 ; j < n_cols ; j++) {

            cout << setw(3) << array[i][j] << "  ";
        }
        
        cout << "\n";
    }
}

int main() {

    int matrix[3][3] , tran_matrix[3][3];

    fill_matrix_with_ordered_numbers(matrix , 3 , 3);

    cout << "The following are matrix elements: \n";
    print_matrix_elements(matrix , 3 , 3 );

    transpose_matrix(matrix , tran_matrix , 3 , 3);

    cout << "The following are transpose matrix\' elemetns: \n";
    print_matrix_elements(tran_matrix , 3 , 3);
}