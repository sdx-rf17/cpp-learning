#include <iostream>
using namespace std;

void InputOfTheNumbers(float Number[], int length);
float calculateTheSum(float Number[], int length, float outOfRange[], int &outLength);
void PrintOutOfRange(float outOfRange[], int outLength);
void PrintTheSumOfNumbers(float Number[], float Sum, int length);

int main() {
    int length;

    cout << "How many numbers do you want to add?\n:";
    cin >> length;

    float Number[length];
    int outLength = 0;
    float outOfRange[length];  // Worst case: all inputs >= 50

    InputOfTheNumbers(Number, length);

    float Sum = calculateTheSum(Number, length, outOfRange, outLength);

    // cout << "\nSum = " << Sum << endl;
    // cout << "Out of range count = " << outLength << endl;

    PrintOutOfRange(outOfRange, outLength);
    PrintTheSumOfNumbers(Number, Sum, length);

    return 0;
}

void InputOfTheNumbers(float Number[], int length) {
    for (int c = 0; c < length; c++) {
        cout << c + 1 << " : ";
        cin >> Number[c];
    }
}

float calculateTheSum(float Number[], int length, float outOfRange[], int &outLength) {
    float Sum = 0;
    outLength = 0;

    for (int c = 0; c < length; c++) {
        if (Number[c] >= 50) {
            outOfRange[outLength++] = Number[c];
        } else {
            Sum += Number[c];
        }
    }

    return Sum;
}

void PrintOutOfRange(float outOfRange[], int outLength) {
    cout << "Out of range values (>= 50): [";
    for (int c = 0; c < outLength; c++) {
        cout << outOfRange[c];
        if (c != outLength - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

void PrintTheSumOfNumbers(float Number[], float Sum, int length) {
    cout << "Sum of values < 50: [";
    bool first = true;

    for (int c = 0; c < length; c++) {

        if (Number[c] < 50) {
			
            if (!first) cout << ", ";

            cout << Number[c];
            first = false;
        }
    }

    cout << "] = " << Sum << endl;
}
