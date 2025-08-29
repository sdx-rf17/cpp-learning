#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

enum EnCharType{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int RandomNumber(int From , int To){

    int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char GetRandomChar(EnCharType CharType){

    switch(CharType){

        case EnCharType::SmallLetter: {
            return char(RandomNumber(97 , 122 ));
            break;
        }
        case EnCharType::CapitalLetter: {
            return char(RandomNumber(65 , 90));
            break;
        }
        case EnCharType::SpecialCharacter: {
            return char(RandomNumber(33 , 47));
            break;
        }
        case EnCharType::Digit: {
            return char(RandomNumber(48 , 57 ));
            break;
        }
    }

    return '\0';
}

void PrintResult();

int main(){
    srand((unsigned) time(NULL));

     PrintResult();
    
}

void PrintResult(){
    int c;

    cout << "\n1.Small Letter\n";
    cout << "2.Capital Letter\n";
    cout << "3.Special Character\n";
    cout << "4.Digit\n";
    cout << "Enter your choice :: ";
    cin >> c;

    switch(c){
        case 1:{
            cout << GetRandomChar(EnCharType::SmallLetter) << endl;
            break;
        }
        case 2:{
            cout << GetRandomChar(EnCharType::CapitalLetter) << endl;
            break;
        }
        case 3:{
            cout << GetRandomChar(EnCharType::SpecialCharacter) << endl;
            break;
        }
        case 4:{
            cout << GetRandomChar(EnCharType::Digit) << endl;
            break;
        }
        default:{
            cout << "Invalid choice." << endl;
        }
    }
}
