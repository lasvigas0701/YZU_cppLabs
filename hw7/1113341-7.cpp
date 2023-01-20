#include <iostream>
using namespace std;

int main() {
	int number, groupC, groupM;

	cout << "input student number: ";
	cin >> number;

	groupC = (number - 1) / 3 + 1;
	groupM = (number + 1) % 3 + 2;

	cout << "group in chinese class: " << groupC;
	cout << "\ngroup in math class: " << groupM;

	return 0;
}