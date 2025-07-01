#include <iostream>
using namespace std;

const int K = 1000;
const int M = K*K ; 


void calculatPrecentage ( float totalSales ) {

    cout << "\n\n*************************\n";

	if ( totalSales > 1*M) {
		
		cout << "Total commission (1%) = " << totalSales * 0.01 << " $" << endl;

	} else if ( totalSales > 500*K && totalSales < 1*M ) {

		cout << "Total commission (2%) = " << totalSales * 0.02 << " $" << endl;

	} else if ( totalSales > 100*K && totalSales < 500*K ) {

        cout << "Total commission (3%) = " << totalSales * 0.03 << " $" << endl;

    } else if ( totalSales > 50*K && totalSales < 100*K ) {

        cout << "Total commission (5%) = " << totalSales * 0.05 << " $" << endl;

    } else {

        cout << "Total commission (0%) = 0 $";
    }

    cout << "\n*************************\n";
}

float setTotalSales() {

    float totalSales;
    cout << "Enter the total sales :: ";
    cin >> totalSales;

    return totalSales;
}

int main () {

    calculatPrecentage(setTotalSales());
}










