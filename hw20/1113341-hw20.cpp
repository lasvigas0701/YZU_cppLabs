#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	int m{1}, x, y;
	cin >> n;
	int** array = new int* [n];
	for (int set = 0; set < n; set++) {
		array[set] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = 0;
		}
	}

	array[x = n - 1][y = 0] = 1;

	while (m < n * n) {
		while (x - 1 >= 0 && array[x - 1][y] == 0) {
			array[--x][y] = ++m;
		}
		while (y + 1 < n && array[x][y + 1] == 0) {
			array[x][++y] = ++m;
		}
		while (x + 1 < n && array[x + 1][y] == 0) {
			array[++x][y] = ++m;
		}
		while (y - 1 >= 0 && array[x][y - 1] == 0) {
			array[x][--y] = ++m;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << left << setw(3) << array[i][j];
		}
		cout << endl;
	}

	for (int del = 0; del < n; del++) {
		delete[] array[del];
	}
	delete[] array;
}