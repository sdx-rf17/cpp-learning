#include <iostream>
#include <iomanip>
using namespace std;

void fill_Matrix_With_Ordered_Numbers(int matrix[3][3] , short n_rows , short n_cols){

    short numbers = 0;

    for (int i = 0 ; i < n_rows ; i++){
        for(int j = 0 ; j < n_cols ; j++) {

            matrix[i][j] = ++numbers;
        }
    }
}

void print_matrix_elements(int matrix[3][3] , short n_rows , short n_cols){

    for (int i = 0 ; i < n_rows ; i++){
        for(int j = 0 ; j < n_cols ; j++) {

            cout << setw(3) << matrix[i][j] << "  "  ;
        }

        cout << endl;
    }
}

int main(){

    int matrix[3][3];
    fill_Matrix_With_Ordered_Numbers(matrix , 3 , 3);

    printf("The following is a 3x3 ordered matrix: \n");
    print_matrix_elements(matrix , 3 , 3);

}