#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "��J��Ӿ�ơG";
	cin >> a >> b;

	a += b;
	b = a - b;
	a -= b;

	cout << "�洫��Ʀr�G" << a << " " << b;

}