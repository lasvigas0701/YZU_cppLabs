/*Student ID: 1113341 Name: 張維家*/
/*This program is to output the result of recursive function "f91" for each number*/
#include <iostream>
using namespace std;

int f91(int n) {
	if (n <= 100)
		f91(f91(n + 11));
	else
		return n - 10;
}

int main() {
	int n;

	while (cin >> n)
		cout << f91(n) << endl;
}