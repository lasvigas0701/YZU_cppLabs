#include <iostream>
#include <string>
using namespace std;

void reverseLoop(string& str) {
	char buf;
	for (int i = str.length() - 1, j = 0; i != ((str.length() - 1) / 2); i--, j++) {
		buf = str[i];
		str[i] = str[j];
		str[j] = buf;
	}
	cout << str << endl;
}

void reverseRec(string& str, int l, int r) {
	if (r == ((str.length() - 1) / 2)) {
		cout << str << endl;
	}
	else {
		char buf;
		buf = str[r];
		str[r] = str[l];
		str[l] = buf;
		reverseRec(str, l + 1, r - 1);
	}
}

int main() {
	string str;
	while (true) {
		getline(cin, str);
		size_t length = str.length() - 1;
		reverseRec(str, 0, length);
		reverseLoop(str);
	}
	
}