#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From , int To){

    int rand_num = rand() % (To - From + 1) + From ;
    return rand_num;
}

void FillMatrixWithRandomNumbers(int matrix[3][3] , short n_rows , short n_cols){
    
    for (int i = 0 ; i < n_rows ; i++) {
        
        for(int columns = 0 ; columns  < n_cols ; columns++){
    
            matrix[i][columns] = RandomNumber(1 , 100);
        }
    }
}

void printMatrix(int matrix[3][3] , short n_rows , short n_cols){
    
    for (int i = 0 ; i < n_rows ; i++) {
        
        for(int columns = 0 ; columns  < n_cols ; columns++){
    
            cout << setw(3) <<matrix[i][columns] << "  ";
        }
    
        cout << endl;
    }
}

int RowSum(int matrix[3][3] , short n_rows , short n_cols){

    int row_sum = 0;
    for(int i = 0 ; i <= n_cols - 1 ; i++){
        row_sum += matrix[n_rows][i];
    }

    return row_sum;
}

void printRowSumOfMatrix(int matrix[3][3] , short n_rows , short n_cols){
   
    printf("The following are the sum of each row in the matrix: \n");

    for (int i = 0 ; i < n_rows ; i++) {
        

        cout << "Row " << i + 1 << " Sum = " << RowSum(matrix , i , n_cols) << endl;

    }
}

int main() {

    srand((unsigned) time (NULL));

    int matrix[3][3];
    FillMatrixWithRandomNumbers(matrix , 3 , 3);

    printf("The following is a 3x3 random matrix: \n");
    printMatrix(matrix , 3 , 3);

    cout << endl;

    printRowSumOfMatrix(matrix , 3 , 3);
}
