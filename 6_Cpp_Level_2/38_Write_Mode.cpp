#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file_object;
    file_object.open("my_file.txt", ios::out); //Write Mode

    if(file_object.is_open()){

        file_object << "Welcome to C++'s Write Mode \n";
        file_object << "This is the another file line \n";
    }

    file_object.close();

    return 0;
}