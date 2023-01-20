#include <iostream>
#include <string>
using namespace std;

void output(string str, int l, int r){
	if (l == r) {
		cout << str << endl;
	}
	else {
		for (int i = l; i <= r; i++) {
			swap(str[l], str[i]);
			output(str, l + 1, r);
		}
	}
}

int main() {
	string s;
	while (cin >> s) {
		int r = s.size();
		output(s, 0, r - 1);
	}
	
}