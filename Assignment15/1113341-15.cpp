/*Student ID : 1113341 Name : 張維家*/
/*this code is to find a number is which two numbers in a given array added up*/
#include <iostream>
using namespace std;

int main() {
	int a[4] = { 2, 7, 11, 15 }; //given array
	int ans[2] = {};
	int t;
	int i{}, j{1};
	cin >> t;
	while (a[i] + a[j] != t){ // if the answer (t is added up by which two numbers) is found, then break
		if (j == 3) { //because the size of a is 4, so when the second array is a[3], the first one shuld become the next number
			i++;
			j = i;
		}
		j++;
		//if (i == 3 && j == 3 && a[i] + a[j] != t) {
		//	cout << "No answer\n";
		//	break;
		//}
	}

	ans[0] = i; ans[1] = j; //store the answer in another array;

	cout << ans[0] << " " << ans[1];

	return 0;
}