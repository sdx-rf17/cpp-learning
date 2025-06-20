#include <iostream>
#include <cmath>
using namespace std;

void Seconds_to_Days_Hours_Minutes_Seconds ();

int main () {

    Seconds_to_Days_Hours_Minutes_Seconds ();

}

void Seconds_to_Days_Hours_Minutes_Seconds () {

    int   TotalSeconds , NumberOfDays , NumberOfHours , NumberOfMinutes , Remainder ,
          Seconds = 1 ,
          Minutes = Seconds * 60 ,
          Hours = Minutes * 60 ,
          Days = Hours * 24 ;

    cout << "Enter your total seconds: " ;
    cin >> TotalSeconds;

    NumberOfDays = floor ( TotalSeconds / Days ) ;

    Remainder = TotalSeconds % Days ;

    NumberOfHours = floor ( Remainder / Hours );

    Remainder %= Hours ;

    NumberOfMinutes = floor ( Remainder / Minutes );

    Remainder %= Minutes ;

    cout << "\n" << TotalSeconds << " s \n";

    cout << NumberOfDays << "d: " << NumberOfHours << "h: " << NumberOfMinutes << "m: " << Remainder << "s" << endl;
  
}
