#include <iostream>
using namespace std;

enum Gender {Male , Female};
enum Color {Red = 10 ,Blue = 20 , Green = 30};

struct STperson {
    string name;
    Gender gender;
    Color mycolor;
};

int main () {

    STperson person ;
    person.name = "mohamed";
    person.gender = Gender::Male;
    person.mycolor = Color::Green;

    cout << "Name :: " << person.name << "\n"
         << "Gender :: " <<person.gender << "\n"
         << "My color :: " << person.mycolor << endl;
        
}