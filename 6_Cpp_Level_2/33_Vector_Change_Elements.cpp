#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> num = { 1, 2, 3, 4};
    
    cout << "Initial Vector: ";

    for(const int& i : num){
	    cout << i << " ";
	}
    
    cout << "\n\nUpdate Vector: ";
    
    for(int& i : num){
	    i = 20;
	    cout << i << " ";
	}
    
    num[1] = 87;
    num.at(2) = 34;
    num.at(3) = 55;

    cout << "\n\nUpdate Vector: ";

    for(int& i : num){
	    cout << i << " ";
	}

    
}
