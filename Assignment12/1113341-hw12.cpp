#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			int buf = i;
				cout << i << " = 1";
				int j = 2;
				while (j <= buf) {
					while (buf % j == 0) {
						cout << " * " << j;
						buf /= j;
					}
					j++;
				}
		cout << endl;
		}
	}


	return 0;
}