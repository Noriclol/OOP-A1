#include <iostream>
#include <string>

using namespace std;

string Alfabet = "#abcdefghijklmnopqrstuvxyz";
string SAlfabet = "#ABCDEFGHIJKLMNOPQRSTUVXYZ";

void ReversePyramid(int Input) {
	for (int n = 1; n <= Input; n++) {

		for (int i = 1; i <= n; i++) { 

			cout << n; 

		}
		cout << endl;
	}
}


void ASCIIPyramid(char Input) {

	if (Input >= 'A' && Input <= 'Z') {

		//cout << Input << " is an UpperCase character\n";

		int location = SAlfabet.find(Input);

		for (int n = 1; n <= Input - 'A' + 1; n++) {

			for (int i = 1; i <= n; i++) {

				if (n <= location) {
					cout << SAlfabet[n];
				}
				else {
					break;
				}
			}
			cout << endl;
		}
	}
		

	else if (Input >= 'a' && Input <= 'z') {
		//cout << Input << " is an LowerCase character\n";

		int location = Alfabet.find(Input);

		for (int n = 1; n <= Input - 'a' + 1; n++) {

			for (int i = 1; i <= n; i++) {

				if (n <= location) {
					cout << Alfabet[n];
				}
				else {
					break;
				}
			}
			cout << endl;
		}
	}
}



void main()
{
	cout << "Please enter a char" << endl;
	char c;
	cin >> c;
	cout << "\n";
	ASCIIPyramid(c);

	cout << "Please enter a int" << endl;
	int n;
	cin >> n;
	cout << "\n";
	ReversePyramid(n);
}
