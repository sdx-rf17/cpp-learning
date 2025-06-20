#include <iostream>
using namespace std;

float TaskDurationInSeconds ( int NumOfsec , int NumOfmin , int NumOfhrs , int NumOfDays );
void printResult();

int main () {
    
    printResult();

}

float TaskDurationInSeconds ( int NumOfsec , int NumOfmin , int NumOfhrs , int NumOfDays ) {

    int seconds = 1 ,
    minutes = seconds * 60 ,
    hours = minutes * 60 ,
    days = hours * 24 ;

   return (days * NumOfDays ) + ( hours * NumOfhrs ) + ( minutes * NumOfmin ) + ( seconds * NumOfsec ) ;
    
}

void printResult() {

    int NumOfsec,
        NumOfmin,
        NumOfhrs,
        NumOfDays;

    cout << "Days: ";
    cin >> NumOfDays;
    cout << "Hours: ";
    cin >> NumOfhrs;
    cout << "Minutes: ";
    cin >> NumOfmin;
    cout << "Seconds: ";
    cin >> NumOfsec;

    cout << "\n" << NumOfDays << " Days : " 
         << NumOfhrs << " hours : "
         << NumOfmin << " minutes : " 
         << NumOfsec << " seconds = " 
         << TaskDurationInSeconds ( NumOfsec ,  NumOfmin ,  NumOfhrs ,  NumOfDays ) << endl ;
}