#include <iostream>
using namespace std;

int main() {

    string S = "Hey! my name is Alex , I'm software developer";

    cout << S.length() << endl;

    cout << S.at(8) << endl;

    S.append(", I like to understand things deeply!");

    cout << S << endl;

    S.insert( 26 , " a backend ");

    cout << S << endl;

    S.push_back('X');
    cout << S << endl;

    S.pop_back();
    cout << S << endl;

    cout << S.find("backend") << endl;

    cout << S.find("Backend") << endl;

    if (S.find("Backend") == S.npos)
    {
        cout << "Backend is not found";
    }

    S.clear();
    
    cout << S << endl;
    return 0;
}
