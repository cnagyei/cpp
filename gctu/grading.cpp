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

	else if (score >= 60 && score < 70)
	{
		cout << "Name: " << name << " | Score: " << score << " | Grade: C" << endl;
	}

	else if (score >= 50 && score < 60)
	{
		cout << "Name: " << name << " | Score: " << score << " | Grade: D" << endl;
	}

	else if (score >= 0 && score < 50)
	{
		cout << "Name: " << name << " | Score: " << score << " | Grade: E" << endl;
	}
	else
		cout << "Data entry out of range! Please try again ..." << endl;


        return 0;
}
