#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "輸入兩個整數：";
	cin >> a >> b;

	a += b;
	b = a - b;
	a -= b;

	cout << "交換後數字：" << a << " " << b;

}