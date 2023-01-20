/*Student ID: 1113341 Name: 張維家*/
/*This code is to transform the first character of all words in a sentence to capital*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; /*input string*/
	char upper; /*store the character which should be capital*/

	while (getline(cin, s)) {
		cout << "Input: " << s << endl;
		upper = s[0];
		upper = toupper(upper); /*use toupper function to transform the character to capital*/
		s[0] = upper;
		for (size_t i = 1; i < s.length(); i++) {
			if (s[i] == ' ') {
				upper = s[i + 1];
				upper = toupper(upper);
				s[++i] = upper;
			}
		}

		cout << "Output: " << s << endl;
	}
}