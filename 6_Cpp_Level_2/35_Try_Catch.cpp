#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> num = { 1, 2, 3, 4};

    try
    {
	    cout << num.at(5) << endl;
    }
    catch(...)
    {
	    
	    cout << "Out of bound" << endl;
    }
	    
    
}
	
