#include <iostream>
using namespace std;

string readTheNumber(string message){
    string text;
    cout << message << " \n: " ;
    getline(cin , text);
    return text;
}

void printReversedText(string text) {

    int length = text.length();

    cout << "The original text: " << text << endl;
    cout << "The reversed text: ";

    for (int c = length - 1  ; c >= 0 ; c--) {

        cout << text[c] ;
    }
    cout << endl;
}

int main() {

    printReversedText(readTheNumber("Please enter your text"));
}
