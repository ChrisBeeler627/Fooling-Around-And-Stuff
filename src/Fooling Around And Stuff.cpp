#include <iostream>
using namespace std;

int main(int argc,char**argv)
{
	int n;
	string d;
	string e;
		do {
			string a;
			string b;
			string c;

			cout << "What's your first and last name?" << endl;

			cin >> a >> b;

			cout << "Hello " << a << " " << b << endl;
			cout << "Should I call you by your first name: " << a << ". yes or no?" << endl;

			cin >> c;

			if (c == "yes") {
				cout << "okay " << a << ", we're gonna go on an adventure" << endl;
				n = 0;
			} else {
				cout << "Gr8 b8 m8, try again!" << endl;
				n = 1;
			}

		} while (n != 0);

	cout << "Where would you like to go? A or B?" << endl;
	cin >> d;

		if (d == "A") {
			cout << "You come across a mystical dragon, which asks you for the password; Do you want to KILL it or BARGAIN with it?" << endl;
			cout << "Please choose KILL or BARGAIN" << endl;
			cin >> e;
			if (e == "KILL"){

			} else if (e == "BARGAIN") {

			} else {

			}

		}else if (d == "B"){

		}else {

		}

	return 0;


}




