/*Student ID : 1113341 Name : ±iºû®a*/
/*this code is to find the quantities of fibonacci numbers which is less or equal to an user input number
 *and output the fibonacci numbers between the range of two user given numbers*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[20] = {}; // set an array
	a[0] = 1;
	a[1] = 1;
	int n, x, y;
	cin >> n >> x >> y; //input
	int count{2}; //since a[0] & a[1] is 1, there have already had two numbers

	for (int i = 0; i < 18; i++) {
		a[i + 2] = a[i] + a[i + 1]; 
		if (n < a[i + 2]) // if the fibonacci number is larger than input n, then break
			break;
		count++; //record how many fibonacci numbers it is now
	}
	
	cout << count << " ";
	
	for (int i = x; i <= y; i++)
		cout << a[i] << " ";
}