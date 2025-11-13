#include <iostream>
using namespace std;

struct st_employee{
    
    string name;
    int age;
    float salary;
};

int main() {

    st_employee employee[3] , * p_emp;

    cout << "Enter the three employees info \n\n";
    
    for (int c = 0 ; c < 3 ; c++) {

        cout << c << "._____________\n";
        cout << "Name: ";
        cin >> employee[c].name;

        cout << "Age: ";
        cin >> employee[c].age;

        cout << "Salary: ";
        cin >> employee[c].salary;

    }


    cout << "\n\n Print Elements \n\n";

    p_emp = employee;

    for(st_employee& elements : employee ){

        cout << "Name: " << p_emp->name  << endl;
        cout << "Age: " << p_emp->age << endl;
        cout << "Salary: " << p_emp->salary << endl;
    }


 
}