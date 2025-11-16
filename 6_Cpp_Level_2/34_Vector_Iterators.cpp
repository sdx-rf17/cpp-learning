#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> num = { 1, 2, 3, 4};
    
    cout << "Initial with pointer: ";

    for(const int& i : num){
	    cout << i << " ";
	}

    vector <int>::iterator iter;
    
    cout << "\n\nInitial with iterator: ";

    for(iter = num.begin(); iter != num.end() ; iter++){

	    cout << *iter << " " ;
	}
    
}  
