#include <iostream>
using namespace std;

int setRange_End () {
    int N;
    cout << "Enter the range end\n:";
    cin >> N;
    return N;
}

int  SumOddNun(int N) {

    int result = 0;

    for (int u = 1 ; u <= N ; u += 2) {

        result += u ;
    }

    return result;
}

void printResult(int result , int N) {

    cout << "The sum of odd numbers from 1 to " << N << " = " << result << endl;
}

int main () {
    int range_End = setRange_End();
    
    printResult(SumOddNun(range_End) , range_End);

}