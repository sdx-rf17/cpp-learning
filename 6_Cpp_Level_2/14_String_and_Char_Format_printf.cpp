#include <iostream>
using namespace std;

int main()
{

    char Name[] = "Alex";
    char CompanyName[] = "Computer Development"; 

    printf("Dear %s, How are you?\n\n", Name);
    printf("Welcome to %s Company!\n\n", CompanyName);

    char c = 'S';
    printf("Setting the width of c :%*c \n", 1, c);
    printf("Setting the width of c :%*c \n", 2, c);
    printf("Setting the width of c :%*c \n", 3, c);
    printf("Setting the width of c :%*c \n", 4, c);
    printf("Setting the width of c :%*c \n", 5, c);
}