#include <iostream>
#include <string>
using namespace std;


struct STadresse {
    string Country ;
    string City;
};

struct STperson {
    string name;
    string phone;
    int age;
    STadresse adresse;

};

struct STsalary
{
    int Monthly;
    int Yearly;
};
 
struct Employee {
        STperson ID;
        STsalary salary;
};

void getInfo (Employee person);
void setInfo (Employee &person);

int main () {

            Employee person;
            setInfo(person);
            getInfo(person);          
}


void setInfo (Employee &person) {

            cout << "Please enter your name \n: ";
            getline(cin , person.ID.name);
            cout << "Please enter your age\n: ";
            cin >> person.ID.age;
            cout << "Enter your Phone number\n: ";
            cin >> person.ID.phone;
            cout << "Enter your country\n: ";
            cin >> person.ID.adresse.Country;
            cout << "Enter your city\n: ";
            cin >> person.ID.adresse.City;
            cout << "Enter your Monthly salary\n: ";
            cin >> person.salary.Monthly;
            

}


void getInfo (Employee person) {

    cout << "\n\n*****************************************************\n\n"
            << "Name :: " <<person.ID.name << "\n" 
            << "Age :: " <<person.ID.age << "\n" 
            << "Number :: " << person.ID.phone << "\n"
            << "Country :: " <<person.ID.adresse.Country << endl
            << "City :: " << person.ID.adresse.City << "\n" 
            << "Salary in month :: " <<person.salary.Monthly << endl 
            << "Salary in year :: " << person.salary.Monthly * 12 << "\n\n " 
            << "*****************************************************\n\n";

}