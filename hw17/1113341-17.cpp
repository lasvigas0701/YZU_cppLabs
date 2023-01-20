#include <iostream>
#include <iomanip>
using namespace std;
#define N 10

int main() {
	int n , x, y, m{1};
	int a[N][N] = {};
	cin >> n;
	a[x = 0][y = n - 1] = 1;
	
	while (m < n * n) {
		while (x + 1 < n && a[x + 1][y] == 0) {
			a[++x][y] = ++m;
		}
		while (y - 1 >= 0 && a[x][y - 1] == 0) {
			a[x][--y] = ++m;
		}
		while (x - 1 >= 0 && a[x - 1][y] == 0) {
			a[--x][y] = ++m;
		}
		while (y + 1 < n && a[x][y + 1] == 0) {
			a[x][++y] = ++m;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << left << setw(3) << a[i][j] << " ";
		}
		cout << endl;
	}
}