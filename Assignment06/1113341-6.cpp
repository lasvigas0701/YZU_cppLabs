#include <iostream>
using namespace std;

int main() {
	int tw, us;

	cout << "input what time is it in TW(if): ";
	cin >> tw;
	if (tw - 15 < 0) {
		us = tw + 9;
	}
	else {
		us = tw - 15;
	}

	cout << "time in the US is: " << us << endl;

	cout << "input what time is it in TW(no-if): ";
	cin >> tw;
	us = (tw + 9) % 24;
	cout << "time in the US is: " << us << endl;

	return;
}