#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;

	cout << "小綠年齡：";
	cin >> a;

	cout << "阿紫年齡：" << ((2 * a - 5) / 10) * 10 + (a + 3) % 10;

}