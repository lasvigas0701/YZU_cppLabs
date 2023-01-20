#include <iostream>
#include <string>
using namespace std;

int main() {

	while (true) {
		string s;
		bool p = true;
		getline(cin, s);

		size_t len = s.size();

		for (size_t i = len - 1, j = 0; i != 0; i--, j++) {
			if (s[i] != s[j]) {
				p = false;
				break;
			}
		}

		if (p)
			cout << "input: " << s << "\nis Palindrome\n";
		else if(!p)
			cout << "input: " << s << "\nisn't Palindrome\n";
	}

}