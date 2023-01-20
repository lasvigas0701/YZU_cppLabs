#include <iostream>
using namespace std;

int main() {
	int n, sum{}, buf=1;
	cin >> n;

	for (int j = 1; j <= n; j++) {
		/*int buf{1};
		for (int i = 1; i <= j; i++) {
			buf *= i;
		}*/
		buf *= j;
		sum += buf;
	}

	cout << sum;
}