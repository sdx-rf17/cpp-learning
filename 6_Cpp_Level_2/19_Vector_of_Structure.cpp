#include <iostream>
#include <vector>
using namespace std;

struct stEmployee{
    
    string First_Name;
    string Last_Name;
    float Salary = 0;
};

void PrintVectorElements(vector <stEmployee>& vEmployee){
    
    //Print the vector elements
    printf("\nEmpolyee Vector:\n");
    
    for(stEmployee& Element: vEmployee ){
    
        cout << "\nFirst Name: " << Element.First_Name 
             << "\nLast Name: " << Element.Last_Name
             << "\nSalary: " << Element.Salary << "\n";  
    }

}

int main(){

    // set the vector type (stEmpolyee)
    vector <stEmployee> vEmployee ;

    // Create temp var type (stEmpoyee)
    stEmployee TempEmployee;
    TempEmployee.First_Name = "Alex";
    TempEmployee.Last_Name= "jomand";
    TempEmployee.Salary = 4225;
    vEmployee.push_back(TempEmployee);

    TempEmployee.First_Name = "Simpsom";
    TempEmployee.Last_Name= "Daerhax";
    TempEmployee.Salary = 9345;
    vEmployee.push_back(TempEmployee);

    TempEmployee.First_Name = "Don";
    TempEmployee.Last_Name= "Thurn";
    TempEmployee.Salary = 8809;
    vEmployee.push_back(TempEmployee);


    PrintVectorElements(vEmployee);


    return 0;
}