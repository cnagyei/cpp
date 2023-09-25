#include <iostream>
#include <string>
using namespace std;

int main()
{
	float amount;

	cin >> amount;

	/*
	 * if amount is 500, write "you can buy a mouse"
	 * if amount is 1000, "you can buy a phone"
	 * else you can't buy anything
	 */

	if (amount == 500)
		cout << "you can buy a mouse" << endl;
	else if (amount ==1000)
		cout <<"you can buy a phone" << endl;
	else 
	{
		cout << " you cvan buy anything " << endl;
	}

        return 0;
}
