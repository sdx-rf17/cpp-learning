#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
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

    do{
    cout << "\n1.Small Letter\n";
    cout << "2.Capital Letter\n";
    cout << "3.Special Character\n";
    cout << "4.Digit\n";
    cout << "(-1).Exit\n";
    cout << "Enter your choice :: ";

    while(!(cin >> c)){
        //Invalid input: clear and ignore
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input .Try again..\n";
        continue;
    }

    switch(c){
        case 1:{
            cout << "\n< " << GetRandomChar(EnCharType::SmallLetter) <<  " >" << endl; // return small letter
            break;
        }
        case 2:{
            cout << "\n< " << GetRandomChar(EnCharType::CapitalLetter) <<  " >" << endl; // return capital letter
            break;
        }
        case 3:{
            cout << "\n< " << GetRandomChar(EnCharType::SpecialCharacter) <<  " >" << endl; // return special character
            break;
        }
        case 4:{
            cout << "\n< " << GetRandomChar(EnCharType::Digit) <<  " >" << endl; // return a digit
            break;
        }
        default: {

            if(c != -1 || c > 5 ) cout << "Invalid choice. Try again\n";
        }
            
            
       
    }
    }while( c != -1 );
}
