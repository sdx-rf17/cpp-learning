#include <iostream>
using namespace std;

struct strInfo {
    string firstName;
    string lastName;
    short int age;
    int number;
};

void setInfo (strInfo &Info) {

    cout << "Please enter your first name \n: ";
    cin >> Info.firstName;
    cout << "Please enter your last name \n: ";
    cin >> Info.lastName;
    cout << "Please enter your age \n: ";
    cin >> Info.age;
    cout << "Please enter your number " << endl << " : ";
    cin >> Info.number;

}

void getInfo (strInfo Info) {

    cout << "\n\n*********************************\n\n" ;
    cout << "First name: " << Info.firstName << "\n";
    cout << "Last name: " << Info.lastName << "\n";
    cout << "Age: " << Info.age << "\n" ;
    cout << "Number: " << Info.number << endl;
}


int main () {

    strInfo PersonOne;
    setInfo(PersonOne);
    getInfo(PersonOne);
}