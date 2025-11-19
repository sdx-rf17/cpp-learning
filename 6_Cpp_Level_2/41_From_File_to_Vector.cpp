#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string f_name , vector <string> &vFileContent){

    fstream file_object;
    file_object.open(f_name , ios::in);

    if(file_object.is_open()){

        string f_content;

        while(getline(file_object , f_content)){

            vFileContent.push_back(f_content);
        }

        file_object.close();

    }

}

int main() {

    vector <string> vFileContent;

    LoadDataFromFileToVector("my_file.txt", vFileContent);

    for(string &Line : vFileContent){

        cout << Line << endl;
    }
}