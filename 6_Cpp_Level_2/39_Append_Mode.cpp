#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file_object;
    file_object.open("my_file.txt", ios::out | ios::app); //Append Mode

    if(file_object.is_open()){

        file_object << "Welcome to C++'s Append Mode \n";
        file_object << "This is the another file line using Append Mode \n\n";
    }

    file_object.close();

    return 0;
}
