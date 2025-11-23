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

int Columns_Sum(int matrix[3][3] , short n_rows , short n_cols){

    int columns_sum = 0;
    for(int i = 0 ; i <= n_rows - 1 ; i++){
        columns_sum += matrix[i][n_cols];
    }

    return columns_sum;
}


void addColumns_SumToarray(int matrix[3][3] , short n_rows , short n_cols , int array[3]){
   
    for (int j = 0 ; j < n_rows ; j++) {
        

        array[j] = Columns_Sum(matrix , n_rows , j);

    }
}


void printArrayElements(int array[3] , short n_rows){
   
    printf("The following are the sum of each column in the matrix: \n");

    for (int i = 0 ; i < n_rows ; i++) {
        

        cout << "Column " << i + 1 << " Sum = " << array[i] << endl;

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
    addColumns_SumToarray( matrix, 3, 3 ,  array);
    printArrayElements(array , 3);

    
}
