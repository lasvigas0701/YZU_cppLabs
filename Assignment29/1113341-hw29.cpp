#include <iostream>
#include <cmath>;
using namespace std;

void Hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		cout << "���ʲ� " << n << " �ӽL�l�q " << a << " �� " << c << endl;
	}
	else {
		Hanoi(n - 1, a, c, b);
		cout << "���ʲ� " << n << " �ӽL�l�q " << a << " �� " << c << endl;
		Hanoi(n - 1, b, a, c);
	}

}

int main() {
	int n;

	while (cin >> n) {
		Hanoi(n, 'A', 'B', 'C');
		cout << "�`�@���� " << pow(2, n) - 1 << " ��";
	}


}