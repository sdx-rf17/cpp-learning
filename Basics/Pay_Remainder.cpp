#include <iostream>
using namespace std;

int main() {

        cout << "________ Pay Remainder ________\n\n";

        float TotalBill ,
              CashPaid,
              payREM;

        cout << "Enter the total bill :: ";
        cin >> TotalBill;
        cout << "Enter the cash paid :: ";
        cin >> CashPaid;

        payREM = CashPaid - TotalBill ;

        cout << "\n pay remainder :: " << payREM << " $" << endl;

}