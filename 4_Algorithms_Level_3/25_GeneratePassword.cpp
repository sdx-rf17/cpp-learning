#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << "\n: ";
        cin >> number;
    }while(number <= 0);


    return number;
}

string GeneratePassword(int length){
    string password;
    string characters = "ABCDEFGIJKLMNOPQRSTVWXYZ123456789";
    int charSize = characters.size();
    int randomIndex;
    for (int c = 0 ; c <= length ; c++){

        randomIndex = rand() % charSize;
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    
    srand((unsigned) time(NULL));
    int length = ReadPositiveNumber("Enter the length of the password");

    cout << "\nYour Password :: " << GeneratePassword(length) << endl;
}