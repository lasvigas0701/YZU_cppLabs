#include <iostream>;
#include <cmath>;
using namespace std;

int duck(int n) {
	if (n == 1) {
		return 2;
	}
	else {
		return 2 * duck (n - 1);
	}
}

int main() {
	int n;
	while (cin >> n) {
		int sum = 0, each = 0;
		for (int i = 1; i <= n; i++) {
			each = duck((n - i + 1));
			cout << "�b�� " << i << " ����X " << each << " ���n" << endl;
			sum += each;
		}
		cout << "�@��X " << sum << " ���n\n";
	}

}