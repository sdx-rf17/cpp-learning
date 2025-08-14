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

void PrintDigitFrequencey(unsigned long long number, short digit)
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

    cout << "Digit " << digit << " Frequencey is " << frequencey << " times." << endl;
}

int main()
{

    unsigned long long number = ReadPositiveNumber("please enter a POSITIVE number");
    short digit = ReadPositiveNumber("Enter a digit that you\'re looking for");
    PrintDigitFrequencey(number, digit);
}
