#include  <iostream>
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

