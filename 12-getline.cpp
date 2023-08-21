#include <iostream>
using namespace std;

int main()
{
	string name, placeOfBirth, hobby;

	cout << "Enter name" << endl;
	getline(cin, name);
	cout << "My name is " << name << endl;

	cout << "Enter place of birth " << endl;
	cin >> placeOfBirth;

	cout << "Enter hobby" << endl;
	cin >> hobby;

	return (0);
}
