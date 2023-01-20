#include <iostream>
using namespace std;

int main()
{
	char input;
	int n{}, a[128]{};

	do {
		cin >> input;
		a[input]++;
	} while (cin.get() != '\n');

	//Printing frequency of each character.
	for (int i = 48; i < 123; i++) //ascii code from 1 to z.
	{
		if (a[i] != 0)
		{
			cout << (char)i << " => " << a[i] << endl;
		}
	}
	return 0;
}