#include <iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << "\n: ";
        cin >> number;
    }while(number <= 0);

    return number;
}
void PrintNumberPattern(int number){

    for (int i = 0 ; i <= number ;i++){

            for (int j = 0 ; j < i  ; j++){

                cout << i ;
            }

            cout << "\n";
        }
}

int main() {

    PrintNumberPattern(ReadPositiveNumber("Enter a positive number"));
}
