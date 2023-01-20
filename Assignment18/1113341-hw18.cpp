#include <iostream>
using namespace std;

//below is my first try.
/*int main() {
	char a[200];
	char store[6] = { '1', '2', '3', 'a', 'b', 'c' };
	int count[7] = {};

	int n = 0, i = 0;

	cout << "Please input 1~3 or a~c:" << endl;

	do {
		cin >> a[n++];
		switch (a[i++]) {
		case '1':
			count[0]++;
			continue;
		case '2':
			count[1]++;
			continue;
		case '3':
			count[2]++;
			continue;
		case 'a':
			count[3]++;
			continue;
		case 'b':
			count[4]++;
			continue;
		case 'c':
			count[5]++;
			continue;
		default:
			count[6]++;
			continue;
		}
	} while (cin.get() != '\n');

	for (int j = 0; j < 6; j++) {
		cout << store[j] << "=>" << count[j] << endl;
	}
	cout << "¨ä¥L" << "=>" << count[6] << endl;
}*/

#include <iostream>
using namespace std;

int main()
{
	char a[100];
	int n{};
	int freq[256] = { 0 };
	do {
		cin >> a[n++];
	} while (cin.get() != '\n');

	//Calculating frequency of each character.
	for (int i = 0; a[i] != '\0'; i++)
	{
		freq[a[i]]++;
	}

	//Printing frequency of each character.
	for (int i = 48; i < 123; i++) //ascii code from 1 to z.
	{
		if (freq[i] != 0)
		{
			cout << (char)i << " => " << freq[i] << endl;
		}
	}
	return 0;
}