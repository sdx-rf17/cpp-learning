#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void loadDataFromFileToVector(string f_name , vector <string>& vFileContent){

    fstream file_object;
    file_object.open(f_name , ios::in);

    if (file_object.is_open()){

        string content;

        while(getline(file_object , content)){

            vFileContent.push_back(content);
        }

        file_object.close();
    }
}

void saveVectorToFile(string f_name , vector <string>& vFileContent){

    fstream file_object;
    file_object.open(f_name , ios::out);

    if(file_object.is_open()){

	    for(string& content : vFileContent){
		    
		    if(content != "")
		    {
			file_object << content << endl;
		    }
		}

        file_object.close();

    }

}

void deleteRecordFromFile(string f_name , string record){

    vector <string> vFileContent;
    loadDataFromFileToVector(f_name , vFileContent);

    for(string& content : vFileContent){

        if(content == record){
            content = "";
        }
    }

    saveVectorToFile(f_name , vFileContent);
}

void PrintFileContent(string f_name){

    fstream file_object;
    file_object.open(f_name , ios::in);

    if(file_object.is_open()){

        string content;

        while(getline(file_object , content)){

            cout << content << endl;
        }

        file_object.close();
    }
}
int main() {

    cout << "\nPrint Content file before delete the record \n\n";
    PrintFileContent("my_file.txt");

    cout << "\nPrint Content file after deleted the record \n\n";
    deleteRecordFromFile("my_file.txt", "alex");
    
    PrintFileContent("my_file.txt");

    return 0;

}
