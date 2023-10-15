#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cout << "input: ";
	getline(cin, input);

	cout << char(218);
	for (int i = 0; i < input.length() + 2; i++) {
		cout << char(196);
	}
	cout << char(191) << endl;

	cout << char(179);
	cout << ' ' << input << ' ';
	cout << char(179) << endl;

	cout << char(192);
	for (int i = 0; i < input.length() + 2; i++) {
		cout << char(196);
	}
	cout << char(217) << endl;
	cout << endl;

	system("pause");
	return 0;
}