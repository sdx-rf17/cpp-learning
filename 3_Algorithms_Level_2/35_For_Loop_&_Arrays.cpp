#include <iostream>
using namespace std;

void ReadArrayData(int Arr[100], int &length);
void PrintArrayData(int Arr[100], int length);
int CalculateArraySum(int Arr[100], int length);
float CalculateArrayAverage(float arrySum, int length);

int main()
{

    int Arr[100], length = 0, arrySum;
    ReadArrayData(Arr, length);
    PrintArrayData(Arr, length);

    arrySum = CalculateArraySum(Arr, length);
    cout << "\n***********************\n";
    cout << "The sum = " << arrySum << endl;
    cout << "The average = " << CalculateArrayAverage(arrySum, length) << endl;
}

void ReadArrayData(int Arr[100], int &length)
{

    cout << "How many number do you want to enter\n: ";
    cin >> length;

    for (int t = 0; t <= length - 1; t++)
    {

        cout << t + 1 << "_: ";
        cin >> Arr[t];
    }

    cout << endl;
}

void PrintArrayData(int Arr[100], int length)
{

    for (int u = 0; u <= length - 1; u++)
    {

        cout << "Number [" << u + 1 << "] : " << Arr[u] << "\n";
    }
    cout << endl;
}

int CalculateArraySum(int Arr[100], int length)
{

    int arrySum = 0;
    for (int y = 0; y <= length - 1; y++)
    {

        arrySum += Arr[y];
    }

    return arrySum;
}

float CalculateArrayAverage(float arrySum, int length)
{

    return arrySum / length;
}