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

	if (gender == 'M')
		cout << "The user is a male" << endl;
	else if (gender == 'F')
		cout << "The user is a female" << endl;
	else
		cout << "Wrong entry. Please try again!!" << endl;

        return 0;
}
