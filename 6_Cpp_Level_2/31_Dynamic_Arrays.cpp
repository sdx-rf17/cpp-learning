#include <iostream>
using namespace std;


int main() {

    float* ptr;
    int length = 0;

    cout << "Enter number of how many students? ";
    cin >> length;

    ptr = new float[length];

    cout << "\nEnter grades of the students." << endl;
    for (int i = 0 ; i < length ; i++){

        printf("Student %d: " , i + 1);
        cin >> *(ptr + i);
    }

    cout << "\nDisplay grades of the students" << endl;
    for (int i = 0 ; i < length ; i++){

        printf("Studen %d: %.2f \n" , i + 1 , *(ptr + i));
    }



    delete[] ptr;
    return 0;
}