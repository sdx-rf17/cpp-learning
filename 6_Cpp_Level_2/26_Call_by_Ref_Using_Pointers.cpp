#include <iostream>
using namespace std;

void swap(int* a , int* b){

    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 10,
        b = 20;
    
    cout << "\nbefore Swaping \n";
    printf("a = %d \nb = %d ", a , b );

    swap(&a , &b);

    cout << "\nAfter Swaping \n";
    printf("a = %d \nb = %d ", a , b );
    

}