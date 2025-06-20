#include <iostream>
using namespace std; 

void setGrades(float Grades[]) {

    cout << "Please enter Grade 1\n: ";
    cin >> Grades[0];
    cout << "Please enter Grade 2\n: ";
    cin >> Grades[1];
    cout << "Please enter Grade 3\n: ";
    cin >> Grades[2];

}
void getAverageGrades(float Grades[]) {

    cout << "The average of grades is: " <<  (Grades[0] + Grades[1] + Grades[2]) / 3  << endl; 
}

int main () {

    float Grades[3];
    setGrades(Grades);
    getAverageGrades(Grades);

}