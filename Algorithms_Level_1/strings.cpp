#include <iostream>
#include <string>

using namespace std;

int main()
{

    string myStrings = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of myStrings is " << myStrings.length() << "\n";

    cout << "myStrings [4] = " << myStrings[4] << endl; // This will print E;

    string S1 = "18", S2 = "45";

    string S3 = S1 + S2;
    cout << S3 << "\n"; // This will print 1845 ;

    int sum = stoi(S1) + stoi(S2);
    cout << "Sum (using \"stoi\" ) = " << sum << endl;
}