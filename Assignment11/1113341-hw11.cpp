#include <iostream>
using namespace std;

int main() {
	int n, m;//上界與下界
	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		int store = i;
		int buf{};
		while (true) {
			buf = store % 10;
				if ((buf != 0 && (i % buf) != 0) || buf == 0) {
					break;
				}
				store /= 10;
				if (store == 0 && i % buf == 0) {
					cout << i << " ";
					break;
				}
		}
	}


	return 0;
}