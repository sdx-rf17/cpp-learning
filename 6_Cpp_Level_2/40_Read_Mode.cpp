#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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

	printFileContent("my_file.txt");

	return 0;
}

