#include <iostream>
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << "\n: ";
        cin >> number;
    }while(number <= 0);

    return number;
}

string ReadText(string message){
    string Text;
    cout << message << "\n: ";
    getline(cin,Text);

    return Text;
}

string EncryptText(string Text, short EncryptionKey){

    for(int c = 0 ; c <= Text.length() ; c++){

        Text[c] = char((int) Text[c] + EncryptionKey);    
    }

    return Text;
}

string DecryptText(string Text, short EncryptionKey){

    for(int c = 0 ; c <= Text.length() ; c++){

        Text[c] = char((int) Text[c] - EncryptionKey);    
    }

    return Text;
}

int main() {

    string Text = ReadText("Enter your text");
    int EncryptionKey = ReadPositiveNumber("enter your encryption key");
    string TextAfterEncryption = EncryptText(Text , EncryptionKey);
    cout  << "Text after Encryption: " << TextAfterEncryption << endl;
    
    int NewKey = 0;
    do{
        cout << "Encryption key (exit press -1)\n: ";
        cin >> NewKey;

        if(NewKey == EncryptionKey) {
            cout <<"\n" <<  DecryptText(TextAfterEncryption, EncryptionKey) << endl;
            return 0;
        } 
    }while (NewKey != -1);
}
