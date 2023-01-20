#include <iostream>
using namespace std;

int main()
{
	int year;
	bool y;

	cout << "Enter a year ( 1583-3000 ): ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		y = true;
		cout << "Year " << year << " is a leap year";
	}
	else {
		y = false;
		cout << "Year " << year << " is a common year";
	}

	return 0;
}