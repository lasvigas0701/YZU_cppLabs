/*Student ID : 1113341 Name : ±iºû®a*/
/*this code is an adaptation of uva 100 - The 3n + 1 problem givien that it will execute 3 times
 *and output the number which has the biggest cycle length and its cycle length*/


#include <iostream>
using namespace std;

int main() {
	int n, m; //left and right
	int answer, max;

	for (int last = 1; last <= 3; last++) { // do three times
		cin >> n >> m;
		answer = 0; max = 0; //initialization
		for (int i = n; i <= m; i++) {
			int num{1};
			int k = i; //now number
			while (k != 1) {
				if (k % 2 == 0) {
					k /= 2;
					num++;
				}
				else {
					k = 3 * k + 1;
					num++;
				}
			}
			if (num > answer) {
				answer = num; //to store the answer of the largest cycle length
				max = i; // to store the number which the largest cycle length belongs to
			}

		}
		cout << "max: " << max << "\ttime: " << answer << endl; //output the number and its cycle length
	}

	return 0;
}