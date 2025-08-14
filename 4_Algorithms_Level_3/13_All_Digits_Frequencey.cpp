#include <iostream>
using namespace std;

unsigned long long ReadPositiveNumber(string message)
{
    unsigned long long number;

    do
    {
        cout << message << "\n: ";
        cin >> number;
    } while (number <= 0);

    return number;
}

int CountDigitsFrequencey(unsigned long long number, short digit)
{
    unsigned long long Remainder = 0,
                       frequencey = 0;

    while (number > 0)
    {

        Remainder = number % 10;
        number /= 10;

        if (digit == Remainder)
            frequencey++;
    }

    return frequencey;

}

void PrintAllDigitsFrequencey(unsigned long long number){
    cout << endl;

    for(int c = 0; c < 10 ; c++) {

        short digitFrequencey = 0 ;
        digitFrequencey = CountDigitsFrequencey(number , c);
           
        if ( digitFrequencey > 0) {

            cout << "Digit: " << c << " Frequencey is " << digitFrequencey << " time(s)." << endl;
        }

    }
}

int main()
{

    unsigned long long number = ReadPositiveNumber("please enter a POSITIVE number");
    PrintAllDigitsFrequencey(number);

}