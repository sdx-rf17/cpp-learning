#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From , int To){

    int rand_num = rand() % (To - From + 1) + From ;
    return rand_num;
}

void FillMatrixWithRandomNumbers(int matrix[3][3] , short n_rows , short n_cols){
    
    for (int rows = 0 ; rows < n_rows ; rows++) {
        
        for(int columns = 0 ; columns  < n_cols ; columns++){
    
            matrix[rows][columns] = RandomNumber(1 , 100);
        }
    }
}

void printMatrix(int matrix[3][3] , short n_rows , short n_cols){
    
    for (int rows = 0 ; rows < n_rows ; rows++) {
        
        for(int columns = 0 ; columns  < n_cols ; columns++){
    
            cout << setw(3) <<matrix[rows][columns] << "  ";
        }
    
        cout << endl;
    }
}

int main() {

    srand((unsigned) time (NULL));

    int matrix[3][3];
    FillMatrixWithRandomNumbers(matrix , 3 , 3);

    printf("The following is a 3x3 random matrix: \n");
    printMatrix(matrix , 3 , 3);

}