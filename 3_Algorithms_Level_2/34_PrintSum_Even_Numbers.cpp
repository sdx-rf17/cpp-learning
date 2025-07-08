#include <iostream>
using namespace std;

int setRange_End () {
    int N;
    cout << "Enter the range end\n:";
    cin >> N;
    return N;
}

int  SumEvenNun(int N) {

    int result = 0;

    for (int u = 0 ; u <= N ; u += 2) {

        result += u ;
    }

    return result;
}

void printResult(int result , int N) {

    cout << "The sum of even numbers from 1 to " << N << " = " << result << endl;
}

int main () {
    int range_End = setRange_End();
    
    printResult(SumEvenNun(range_End) , range_End);

}