#include <iostream>
using namespace std;

int random_num(int From , int To){

    int num = rand() % (To - From + 1) + From;
    return num;
}

int main() {
    srand ((unsigned) time (NULL));

    int arrLength = 10 ;
    int arr[arrLength];

    for (int n = 0 ; n < arrLength ; n++ ) {

        arr[n] = random_num(10 , 99);
    }

    for (int n : arr) {

        cout << n << " ";
    }

}