#include <iostream>
#include <vector>
using namespace std;

struct stEmployee{
	string First_Name;
	string Last_Name;
	float salary;
};

void ReadVectorElement(vector <stEmployee>& vEmployee){

	stEmployee Temp_Employee;
	char choice;

	do {
		cout << "\nEnter the first name: ";
		cin >> Temp_Employee.First_Name;
		
		cout << "Enter the  last name: ";
		cin >> Temp_Employee.Last_Name;

		cout << "Enter the salary: ";
		cin >> Temp_Employee.salary;

		vEmployee.push_back(Temp_Employee);

		cout << "\nDo you want to add more employee Y/n? ";
		cin >> choice;
	}while(choice == 'Y' || choice == 'y');
	

}

void printVectorElement(vector <stEmployee>& vEmployee){

	for(stEmployee& element: vEmployee){
		
		cout << "\n_________________________";
		cout << "\nFirst Name: " << element.First_Name << "\n";
		cout << "Last Name: " << element.Last_Name << "\n";
		cout << "Salary: " << element.salary << "\n";
		cout << "_________________________\n" << endl;
	}
}

int main(){
	
	vector <stEmployee> vEmployee;
	ReadVectorElement(vEmployee);
	printVectorElement(vEmployee);

	return 0;
}



