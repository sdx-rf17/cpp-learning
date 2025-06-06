#include <iostream>
using namespace std;

int main () {
        
            /* 
                    Program to read a BillValue and add service free and sales Tax 
            */

        float BillValue , TotalBill;
        cout << "Enter the BillValue :: ";
        cin >> BillValue;

        TotalBill = BillValue * 1.1;
        TotalBill *= 1.16;


        cout << "the total bill < " << TotalBill << " > " <<  endl;


}