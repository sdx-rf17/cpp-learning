 #include <iostream>
 using namespace std;

 enum enColor {red = 10 , blue = 34  , green = 56 };
 enum enGender {Male = 100 , Female = 50};

struct stAdresse {
        string Country;
        string City;
        string StreetName;
        string buildingNumber;
};

 struct stContactInfo {
        string Email;
        string Phone;
        stAdresse Adresse;
 };

 struct stPerson{
        string FirstName ;
        string LastName ;
        
        stContactInfo ContactInfo;
        enGender Gender ;
        enColor Color;
 };


 int main () {

            stPerson Person ;
            
            Person.FirstName = "first name";
            Person.LastName = "Last name";
            Person.ContactInfo.Email = "user@email.com";
            Person.ContactInfo.Phone = "47122";
            Person.ContactInfo.Adresse.Country = "UserCountry";
            Person.ContactInfo.Adresse.City = "UserCity";
            Person.ContactInfo.Adresse.StreetName = "UserStreeName";
            Person.ContactInfo.Adresse.buildingNumber = "UserBuildingNumber";

            Person.Gender = enGender::Male;
            Person.Color = enColor::red;


            cout << "First name ::  " <<  Person.FirstName << "\n"  ;
            cout << "Last name ::  " <<  Person.LastName  << "\n";
            cout << "Email ::  " <<  Person.ContactInfo.Email << "\n"  ;
            cout << "Phone ::  " <<  Person.ContactInfo.Phone << "\n" ;
            cout << "Country ::  " <<  Person.ContactInfo.Adresse.Country << endl ;
            cout << "City ::  " <<  Person.ContactInfo.Adresse.City << "\n";
            cout << "Street name ::  " <<  Person.ContactInfo.Adresse.StreetName << "\n" ;
            cout << "Building name ::  " <<  Person.ContactInfo.Adresse.buildingNumber << "\n" ;
            cout << "Gender :: " <<  Person.Gender << "\n";
            cout << "Color ::  " <<  Person.Color << endl;


 }