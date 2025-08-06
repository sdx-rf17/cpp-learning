#include <iostream>
using namespace std;
test
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
    for (int c = 1; c < number; c++)
    {

        if (number % c == 0)
            sum += c;
    }

    return number == sum;
}

void printResult(int number)
{

    if (isPerfectNumber(number))
    {

        cout << number << " is a perfect number." << endl;
    }
    else
    {

        cout << number << " is not a perfect number." << endl;
    }
}

int main()
{

    printResult(ReadPositiveNumber("Please enter a positive number"));
}
