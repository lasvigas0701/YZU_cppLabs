#include <iostream>
using namespace std;

int main() {
	int a, b, change;

	cout << "請輸入兩個正整數： ";
	cin >> a >> b;

	change = a;
	a = b;
	b = change;

	cout << "轉換結果：" << a << " " << b;

	return 0;
}