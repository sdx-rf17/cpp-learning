#include <iostream>
using namespace std;

void PrintAllWords(){

    cout << "\n";
    string word;
        for(int c1 = 65 ; c1 <= 90 ; c1++){

            for(int c2 = 65 ; c2 <= 90 ; c2++){
                
                for(int c3 = 65 ; c3 <= 90 ; c3++){


                    word += char(c1);
                    word += char(c2);
                    word += char(c3);

                    cout << word << endl;
                    word = "";
                }

            }

            cout << "\n______________________\n";
        } 
}

int main() {
    
    PrintAllWords();
}