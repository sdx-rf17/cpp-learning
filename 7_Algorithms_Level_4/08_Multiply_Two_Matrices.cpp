#include <iostream>
#include <iomanip>
using namespace std;

int random_number(int From , int To) {
	
	int rand_num = rand() % (To - From + 1) + From;
	
	return rand_num;
}

void fill_matrix_with_random_numbers(int matrix[3][3] , int n_rows , int n_cols){

	for (int i = 0 ; i < n_rows ; i++){
		for(int j = 0 ; j < n_cols ; j++){
			matrix[i][j] = random_number(1,10);
		}
	}
}

void multiply_two_matrices(int matrix_1[3][3] , int matrix_2[3][3] ,int multi_matrix[3][3] , int n_rows , int n_cols){

	for(int i = 0 ; i < n_rows ; i++){
		for(int j = 0 ; j < n_cols ; j++){
			multi_matrix[i][j] = ( matrix_1[i][j] * matrix_2[i][j] );
		}
	}
}

void print_matrix_elements(int array[3][3] , int n_rows , int n_cols){

    for(int i = 0 ; i < n_rows ; i++) {

        for (int j = 0 ; j < n_cols ; j++) {

            // cout << setw(3);
			printf(" %0*d   " , 2 , array[i][j]);
        }
        
        cout << "\n";
    }
}

int main() {

	srand((unsigned)time(NULL));

	int matrix_1[3][3] , matrix_2[3][3] , mutli_matrix[3][3];

	//fill the first matrix
	fill_matrix_with_random_numbers(matrix_1 , 3 , 3);

	//fill the second matrix
	fill_matrix_with_random_numbers(matrix_2 , 3 , 3);

	cout << "\nMatrix 1: \n";
	print_matrix_elements(matrix_1 , 3 , 3);

	cout << "\nMatrix 2: \n";
	print_matrix_elements(matrix_2 , 3 , 3);

	multiply_two_matrices(matrix_1 , matrix_2 , mutli_matrix , 3 , 3);


	cout << "\nResult : \n";
	print_matrix_elements(mutli_matrix , 3 , 3);
}