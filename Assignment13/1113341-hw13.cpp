#include <iostream>
using namespace std;

int main() {
	int n, m; //left&right;

	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
		int num{};
		for (int i = n; i <= m; i++) {
			bool check = true;
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0) {
					check = false;
					break;
				}
			}
			if (check) {
				num++;
				cout << i << " ";
			}
		}
		cout << "\n共" << num << "個\n";
	}


}