#include <iostream>
#include <string>
using namespace std;

/**
 * main - a simple application to determine the gender
 * 
 * Return 0 (Always success)
 */
int main()
{
	char gender;

	cout << "Enter your gender 'M' for male or 'F' for female\n" << endl;
	cin >> gender;

	if (gender != 'M' || gender != 'F')
		cout << "Wrong entry. Please try again!!!" << endl;
	if (gender == 'M')
		cout << "The user is a male" << endl;
	else
		cout << "The user is a female" << endl;

        return 0;
}
