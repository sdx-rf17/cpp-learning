#include <iostream>
using namespace std;

struct strInfo {
    string firstName;
    string lastName;
    short age;
    int number;
};

int setNumberOfperson() {

    int num;
    cout << "How many person you want to add\n:";
    cin >> num;

    return num;
}

void setPersonInfo (strInfo person[] , int numOfPerson) {

    for (int u = 0 ; u < numOfPerson ; u++) {

        cout << "\n\n"<< u + 1 <<"*__________________________\n\n" ;

        cout << "Please enter your first name \n: ";
        cin >> person[u].firstName;
        cout << "Please enter your last name \n: ";
        cin >> person[u].lastName;
        cout << "Please enter your age \n: ";
        cin >> person[u].age;
        cout << "Please enter your number " << endl << " : ";
        cin >> person[u].number;
        cout << "\n\n__________________________*\n" << endl ;
    }
     
}

void getPersonInfo (strInfo person[] , int numOfPerson) {

    for(int r = 0 ; r < numOfPerson ; r++) {

        cout << "\n\n"<< r + 1 <<"_*********************************\n\n" ;

        cout << "First name: " << person[r].firstName << "\n";
        cout << "Last name: " << person[r].lastName << "\n";
        cout << "Age: " << person[r].age << "\n" ;
        cout << "Number: " << person[r].number << endl;

        cout << "\n\n*********************************\n" << endl ;
    }

}

int main () {


    int numOfPerson = setNumberOfperson();

    strInfo person[numOfPerson];
    setPersonInfo(person , numOfPerson);
    getPersonInfo(person , numOfPerson);
}