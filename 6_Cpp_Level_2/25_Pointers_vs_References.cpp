#include <iostream> 
using namespace std;

int main() { 
 
    int pizza = 20;
    int &ref_pizza = pizza;
    int* p_pizza = &ref_pizza;

    * p_pizza += 10;
    
    cout << "pointer pizz     : " << *p_pizza  << endl;
    cout << "pizza            : " << pizza << endl;
    cout << "ref pizza        : " << ref_pizza << endl;

    

    return 0;
} 