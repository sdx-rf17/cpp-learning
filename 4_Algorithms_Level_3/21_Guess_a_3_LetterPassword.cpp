#include <iostream>
using namespace std;

string ReadPasswordFromUser(string message){
    string letters;
    do{
        cout << message << "\n: ";
        cin >> letters;
    }while(letters.length() > 3);

    return letters;
}

bool GuessPassword(string letters){

    cout << "\n";
    int trial = 0;
    string word;

        for(int c1 = 65 ; c1 <= 90 ; c1++){

            for(int c2 = 65 ; c2 <= 90 ; c2++){
                
                for(int c3 = 65 ; c3 <= 90 ; c3++){

                    trial++;

                    word += char(c1);
                    word += char(c2);
                    word += char(c3);

                    // cout << word << endl
                    if (word == letters) {

                        cout << "\nPassword found after [" << trial << "] Trial(s)" << endl;
                        return true;
                    } 
                    word = "";
                    
                }

            }

            
        }
        
        cout << "\nPassword NOT found."<< endl;
        return false;
}

int main() {
    
    GuessPassword(ReadPasswordFromUser("Enter your letters"));
}
