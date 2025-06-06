#include <iostream>
using namespace std;

enum Role {ADMIN , USER};
enum Gender {Male , Female};

struct STadresse {
    string Country ;
    string City;
};

struct STperson {
    string name;
    string phone;
    int age;
    STadresse adresse;
    Gender gender;

};

struct STsalary
{
    int Monthly;
    int Yearly;
};
 
struct Employee {
        STperson ID;
        Role role;
        STsalary salary;
};

int main () {

        string gender , role;

            Employee employee;

            employee.ID.name = "userName";
            employee.ID.age = 100;
            employee.ID.phone = "78784545";
            employee.ID.adresse.Country = "userCountry";
            employee.ID.adresse.City = "userCity";
            employee.ID.gender = Gender::Male;

            if (employee.ID.gender == Gender::Male ) {
                gender = "Male";
            } else {
                gender = "Female";
            }
             
            employee.role = Role::ADMIN ;
            if (employee.role == Role::ADMIN) {
                role = "ADMIN";
                employee.salary.Monthly = 5000;
                employee.salary.Yearly = employee.salary.Monthly * 12 ;
            }
            else {
                role = "USER";
                employee.salary.Monthly = 1200;
                employee.salary.Yearly = employee.salary.Monthly * 12;
            }
            
            cout << "\n\n*****************************************************\n\n"
            << "Name :: " <<employee.ID.name << "\n" 
            << "Age :: " <<employee.ID.age << "\n" 
            << "Number :: " << employee.ID.phone << "\n"
            << "Country :: " <<employee.ID.adresse.Country << endl
            << "City :: " << employee.ID.adresse.City << "\n" 
            << "Gender :: " <<gender << "\n"
            << " Role :: "<<role << "\n" 
            << "Salary in month :: " <<employee.salary.Monthly << endl 
            << "Salary in year :: " << employee.salary.Yearly << "\n\n " 
            << "*****************************************************\n\n";

            
}