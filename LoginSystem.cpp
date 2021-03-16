#include <iostream>

using namespace std;

class LoginManager {
	public:
		string IDAttempt;

		string pinAttempt;

		string pin = "password";

		string ID = "username";

		bool Success;

		LoginManager() {

			Success = 0;

		}

		void login() {

			cout << "Enter your User ID and Pin.\nID: ";
			cin >> IDAttempt;
			if (IDAttempt == ID) {

				cout << "PIN: ";
				cin >> pinAttempt;

				if (pinAttempt == pin) {

					cout << "Login Succesfull! \n \n";

					cout << "We saved your password in your RAM. \n \n";

					cout << "Memory Address: ";

					cout <<	&pin << endl;
				}

			}

		}

};


int main()
{

	LoginManager loginManagerObj;
	loginManagerObj.login();

};
