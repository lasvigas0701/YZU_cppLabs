#include <iostream>
using namespace std;

int main() {
	int a, b, change;

	cout << "�п�J��ӥ���ơG ";
	cin >> a >> b;

	change = a;
	a = b;
	b = change;

	cout << "�ഫ���G�G" << a << " " << b;

	return 0;
}