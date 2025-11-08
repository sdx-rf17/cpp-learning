#include <iostream>
#include <vector>
using namespace std;

void ReadNumber(vector <int>& vNumber){
    int user_input = 0;
    char choice;
    do {

        cout << "\nEnter your number: ";
        cin >> user_input;
        vNumber.push_back(user_input);

        cout << "Do you want add more numbers Y/n: ";
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');  

}

void printNumberVector(vector <int>& vNumbers){

    cout << "\nNumber vector =";
    for(int &Number : vNumbers){
        
        printf(" %d",Number);
    }    
}
int main(){

    vector <int> vNumbers;
    ReadNumber(vNumbers);
    printNumberVector(vNumbers);


    return 0;

}

