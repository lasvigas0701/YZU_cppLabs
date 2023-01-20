#include <iostream>
using namespace std;

int main() {
	int s[128]{};
	char i, t;
	int n{};
	while (cin >> i) {
		if (i == 24)
			break;
		s[i] = n++;
	}
	cout << "==========\n";

	while (cin >> t){
		/*for (int b = 0; b <= n; b++) {
			if (t == s[b]) {
				cout << "Index: " << b << endl;
				break;
			}
			else if (b == n) {
				cout <<"not in here" << endl;
				break;
			}*/
		/*}*/
		cout << "index: " << s[t];
	}
}