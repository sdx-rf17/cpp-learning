#include <iostream>
#include <iomanip>
using namespace std;

int randomNumber(int From, int To){

    int rand_num = rand() % (To - From + 1) + From;
    return rand_num;
}

void FillMatrixWithRandomNumbers(int matrix[3][3] , short n_rows , short n_cols){

    for(int i = 0 ; i < n_rows ; i++) {

        for(int j = 0 ; j < n_cols ; j++) {

            matrix[i][j] = randomNumber(1 , 100);
        }
    }
}

void printMatrix(int matrix[3][3] ,short n_rows , short n_cols){

    for (int i = 0 ; i < n_rows ; i++) {

        for (int j = 0 ; j < n_cols ; j++){

            cout << setw(3) << matrix[i][j] << "   ";
        }

        cout  << endl;
    }
}

int RowSum(int matrix[3][3] , short n_rows , short n_cols){

    int row_sum = 0;
    for(int i = 0 ; i <= n_cols - 1 ; i++){
        row_sum += matrix[n_rows][i];
    }

    return row_sum;
}


void addRowSumToarray(int matrix[3][3] , short n_rows , short n_cols , int array[3]){
   
    for (int i = 0 ; i < n_rows ; i++) {
        

        array[i] = RowSum(matrix , i , n_cols);

    }
}


void printArrayElements(int array[3] , short n_rows){
   
    printf("The following are the sum of each row in the matrix: \n");

    for (int i = 0 ; i < n_rows ; i++) {
        

        cout << "Row " << i + 1 << " Sum = " << array[i] << endl;

    }
}



int main(){

    srand((unsigned) time (NULL));

    int matrix[3][3];
    int array[3];

    FillMatrixWithRandomNumbers(matrix , 3 , 3);

    printf("The following is a 3x3 random matrix: \n");
    printMatrix(matrix , 3 , 3);

    cout << endl;
    addRowSumToarray( matrix, 3, 3 ,  array);
    printArrayElements(array , 3);

    
}