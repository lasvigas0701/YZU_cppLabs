#include <iostream>
#include <cmath>;
using namespace std;

void Hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		cout << "移動第 " << n << " 個盤子從 " << a << " 到 " << c << endl;
	}
	else {
		Hanoi(n - 1, a, c, b);
		cout << "移動第 " << n << " 個盤子從 " << a << " 到 " << c << endl;
		Hanoi(n - 1, b, a, c);
	}

}

int main() {
	int n;

	while (cin >> n) {
		Hanoi(n, 'A', 'B', 'C');
		cout << "總共移動 " << pow(2, n) - 1 << " 次";
	}


}