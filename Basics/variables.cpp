#include <iostream>
using namespace std;

int main() {
    
    string name ,
           city,
           country;
    int age;

    cout << "\t\t****welcome to our program****\n\n";

        cout << "_ Enter your name :: ";
        cin >> name;
        
        cout << "_ Hello, " << name << "\nHow old are your :: " ;
        cin >> age;
        
        cout << "_ Enter your city & country\n ";
        cout << "_ City :: ";
        cin >> city;
        cout << "_ Country :: ";
        cin >> country;

        
        
        cout << "\n\n********************\n";
        cout << "Name :: " << name
             << "\nAge :: " << age 
             << "\nCity :: " << city
             << "\nCountry" << country << endl;
        cout << "********************\n";
        
   
}