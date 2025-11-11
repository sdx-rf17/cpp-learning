#include <iostream>
#include <vector>
using namespace std;

    // Two ways to clear the data from vecotr 

    // vNumbers.pop_back(); every time you use it will remove the top element

    //vNumbers.clear(); and this one will remove all the elements

int main() {

    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // vNumbers.clear();
    vNumbers.pop_back();

    cout << "Vector Number: \n\n" ;
    for(int& Elements : vNumbers){
	    
	    cout << Elements << "\n";
       }
	

    return 0;

}
