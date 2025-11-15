#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num{ 1, 2, 3, 4, 5};

    cout << "\n\n Using .at(i) \n";
    cout << "Element at index 1: " << num.at(0) << endl;
    cout << "Element at index 3: " << num.at(2) << endl;
    cout << "Element at index 5: " << num.at(4) << endl;

    cout << "\n\n Using [i] \n";
    cout << "Element at index 1: " << num[0] << endl;
    cout << "Element at index 3: " << num[2] << endl;
    cout << "Element at index 5: " << num[4] << endl;

    return 0;
}

