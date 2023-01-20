/*Student ID: 1113341 Name: 張維家*/
/*This program is to output all self-dividing numbers between two numbers entered by user.*/
#include <iostream>
using namespace std;

bool self_dividing(int n) {
	if (n < 10)
		return true;
	else {
		int buf = n, div = n % 10; /*let div be divisor*/
		while (buf > 0) {
			if (div == 0 || n % div != 0) 
				return false;
			buf /= 10;
			div = buf % 10;
		}
		return true;
	}
}

int main() {
	int left, right;
	cin >> left >> right;

	for (int i = left; i <= right; i++) {
		if (self_dividing(i))
			cout << i << " ";
	}

	return 0;
	
}