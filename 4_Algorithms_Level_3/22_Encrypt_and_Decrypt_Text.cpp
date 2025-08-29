#include <iostream>
#include <iostream>
using namespace std;

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

    const short EncryptionKey = 4;

    string Text = ReadText("Enter your text");
    string TextAfterEncryption = EncryptText(Text , EncryptionKey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText before Encryption: " << Text << endl;
    cout << "Text after Encryption: " << TextAfterEncryption << endl;
    cout << "Text after Decryption: " << TextAfterDecryption << endl;
}