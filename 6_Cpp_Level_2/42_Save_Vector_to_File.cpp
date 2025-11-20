#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void saveVectorToFile(string f_name , vector <string> vFileContent){

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

int main() {

    vector <string> vFileContent = { "alex" , "bob" , "martin" , "forina" };

    saveVectorToFile("my_file.txt", vFileContent);

}
