#include <iostream>
#include <windows.h>
using namespace std;

void sumWithWhile(int n);
void sumWithFor(int n);
void choiceFun(int n);

int main()
{

	int n;
	cout << "enter N\n:";
	cin >> n;
	choiceFun( n);
}

void choiceFun(int n)
{
	char c;

	cout << "sum with for (F)\n";
	cout << "sum with while (W)\n";
	cout << "Enter your choose\n:";
	cin >> c;

	if (c == 'F' || c == 'f')
	{

		sumWithFor(n);
	}
	else if (c == 'W' || c == 'w')
	{

		sumWithWhile(n);
	}
	else {

		cout << "wrong choose\n";
		system("cls");
		choiceFun(n);
	}

}

void sumWithFor(int n)
{

	int sum = 0;
	for (int y = 1; y < n; y += 2)
	{

		sum += y;
	}

	cout << "the sum with the for loop = " << sum << endl;
}

void sumWithWhile(int n)
{

	int sum = 0, i = 1;

	while (i < n)
	{

		sum += i;
		i += 2;
	}
	cout << "the sum with the while loop = " << sum << endl;
}