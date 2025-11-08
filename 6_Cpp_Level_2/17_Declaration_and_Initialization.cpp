#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vNumbers = {10 , 24 , 34 , 78 , 56 , 98 , 105 , 739};

    printf("Numbers vector = ");

    for(int &Number : vNumbers)
    {
        printf("%d \n",Number);
    }

    return 0;
}