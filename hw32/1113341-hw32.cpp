#include <iostream>
using namespace std;

void reverse(char* str) {
	char* a = str;
	char* b = str + strlen(str) - 1; /*the last is \0*/
	char buf;

	for (size_t i = 0; i != ((strlen(str)) / 2); i++) {
		buf = *a;
		*a = *b;
		*b = buf;

		a++; b--;
	}
}

int main() {
	char str[100];
	int i{};
	while (cin.getline(str, 100)) {
		cout << "Input: " << str << endl;
		reverse(str);
		cout << "Output: " << str << endl;

		i = 0;
	}
}