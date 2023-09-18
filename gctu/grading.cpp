#include <iostream>
#include <string>
using namespace std;

/**
 * main - calculate gradaes of five students in Maths class
 *
 * Return: 0 on success
 */
int main()
{
	string name;
	float score;

	cout << "Grading System" << endl;
	cout << "______________" << endl;

	cout << "Enter the Name of Student" << endl;
	getline(cin, name);

	cout << "Enter the score of Student" << endl;
	cin >> score;

	if (score >= 80 && score <= 100)
	{
		cout << "Name: " << name << " | Score: " << score << " | Grade: A" << endl;
	}

	else if (score >= 70 && score < 80)
	{
		cout << "Name: " << name << " | Score: " << score << " | Grade: B" << endl;

	}

        return 0;
}
