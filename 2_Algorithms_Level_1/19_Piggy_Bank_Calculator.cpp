#include <iostream>
using namespace std;

int main() {

        cout << "_________ Piggy Bank Calculator _________\n\n";


        float penny,
              nickel,
              dime,
              quarter,
              dollar,
              total;

        cout << "Enter penny = ";
        cin >> penny ;
        cout << "Enter nickel = ";
        cin >> nickel ;
        cout << "Enter dime = ";
        cin >> dime ;
        cout << "Enter quarter = ";
        cin >> quarter ;
        cout << "Enter dollar = ";
        cin >> dollar ;

        total = penny + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100) ;
        
        dollar = total / 100 ;

        cout << "________________\n\n";
        cout << total << " Pennies" << endl;
        cout << dollar << " Dollars" << endl;
        

}