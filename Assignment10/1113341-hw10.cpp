#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= abs(i - ((n+1)/2)); j++) {
			cout << " ";
		}
		for (int k = 1; k <= n - abs(i - ((n + 1) / 2)) * 2; k++) {
			cout << "*";
		}
			cout << endl;
	}
}