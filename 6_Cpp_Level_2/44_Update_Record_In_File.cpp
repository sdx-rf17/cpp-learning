#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void loadDataFromFileToVector(string f_name , vector <string>& vFileContent){

    fstream file_object;
    file_object.open(f_name , ios::in);

    if(file_object.is_open()){

        string content;

        while(getline(file_object , content)){

            vFileContent.push_back(content);
        }

        file_object.close();
    }
}

void saveVectorTofile(string f_name , vector <string> vFileContent){

    fstream file_object;
    file_object.open(f_name , ios::out);

    if(file_object.is_open()){

        for (string& content : vFileContent){

            file_object << content << endl;
        }

        file_object.close();
    }

}

void updateRecordInFile(string f_name , string record , string update){

    vector <string> vFileContent;

    loadDataFromFileToVector(f_name , vFileContent);

    for (string& content: vFileContent){

        if (content == record){

            content = update;
        }
    }

    saveVectorTofile(f_name , vFileContent);
}

void printFileContent(string f_name){

	fstream file_object;
	file_object.open(f_name , ios::in); //read mode
	
	if(file_object.is_open()){

		string f_content;

		while(getline(file_object , f_content)){
				
				cout << f_content << endl;
		}

		file_object.close();
	}

}

int main() {

    cout << "File Content before update \n\n";
    printFileContent("my_file.txt");

    cout << "File Content after update \n\n";
    updateRecordInFile("my_file.txt" , "alex" , "sami");
    printFileContent("my_file.txt");
}