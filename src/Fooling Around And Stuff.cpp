#include <iostream>
using namespace std;

int main(int argc,char**argv)
{
	int n;
	string a; //used
	string b; //used
	string c; //used
	string d; //used
	string e; //used
	string f; //used
	string g;
	string h;
	string i;
	string j;
	string k;
	string l;
	string m;
	string o;
	string p;
	string q;
	string r;
	string s;
do {
	cout << "Welcome to the text adventure! Please have your caps lock on; every answer available will be obvious and fully CAPITALIZED in the text" << endl;

	cout << "What's your first and last name?" << endl;

	cin >> a >> b;

	cout << "Hello " << a << " " << b << endl;
	cout << "Should I call you by your first name: " << a << ". YES or NO?" << endl;

	cin >> c;

		if (c == "YES") {
			cout << "okay " << a << ", we're gonna go on an adventure" << endl;
			n = 0;
		} else {
			cout << "Gr8 b8 m8, try again!" << endl;
			n = 1;
		}


	cout << "Where would you like to go? A or B?" << endl;
	cin >> d;

		if (d == "A") {
			cout << "You come across a mystical dragon, which asks you for the password; Do you want to KILL it or BARGAIN with it?" << endl;
			cout << "Please choose KILL or BARGAIN" << endl;
			cin >> e;
			if (e == "KILL"){
				cout << "You have a ROCK to your left and a WALL to your right. Which do you choose?" << endl;
				cin >> f;

				if (f == "ROCK"){

				} else if (f == "WALL") {


				} else {

				}

			} else if (e == "BARGAIN") {

			} else {

			}

		}else if (d == "B"){

		}else {

		}

} while (n != 0);



return 0;


}




