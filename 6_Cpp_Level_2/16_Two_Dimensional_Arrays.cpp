#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // int array [Rows][Columns]
    int array[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

    for(int c = 0; c < 3 ; c++) {

        for(int p = 0 ; p < 4 ; p++){
            
            cout << array[c][p] << " ";
        }

        cout << endl;
    }

    
    int arr[10][10];

    for (int i = 1 ; i <= 10 ; i++){

        for (int j = 1 ; j <= 10 ; j++) {

            arr[i][j] = i * j ;
        }
    }

    cout << "\nThe result\n";

    for (int i = 1 ; i <= 10 ; i++){

        for (int j = 1 ; j <= 10 ; j++) {

            // cout << left << setw(4) <<  arr[i][j]  << "   ";
            printf("%02d  " ,  arr[i][j] );
        }

        cout << endl;
    }
}