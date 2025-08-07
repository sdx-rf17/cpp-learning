#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{

    int number;
    do
    {
        cout << message << " \n: ";
        cin >> number;
    } while (number <= 0);

    return number;
}

bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int c = 1 ; c < number; c++)
    {

        if (number % c == 0)
            sum += c;
    }

    return (number == sum);
}

void printAllPerfectNumber(int number)
{
    for (int c = 1  ; c <= number ; c++) {


            if (isPerfectNumber(c)){

                cout << c << " < PERFECT NUMBER > \n";
            }
    }
}

int main()
{

    printAllPerfectNumber(ReadPositiveNumber("Please enter a positive number"));
}