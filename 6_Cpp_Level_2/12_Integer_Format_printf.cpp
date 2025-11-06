#include <iostream>
using namespace std;

int main() {

    int page = 1 , total_page = 10;

    printf("The page number = %d \n" , page);
    printf("You are in page %d of %d \n" , page , total_page);


    printf("The page number =  %0*d \n", 2, page);
    printf("The page number =  %0*d \n", 3, page);     
    printf("The page number =  %0*d \n", 4 , page);     
    printf("The page number =  %0*d \n", 5, page);

    int Number1 = 20, Number2 = 30;     
    printf("The Result of %d + %d = %d \n", Number1, Number2,  Number1+ Number2);
}