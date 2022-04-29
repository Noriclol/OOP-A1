#include <iostream>
#include <string>

using namespace std;

class Entry {
public:

	string name;
	int age;
	char gender;
	string adress;
	bool married;
	float height;

};


Entry Input() {
	Entry newEntry;

	string name;
	cout << "enter name(string): ";
	//cin.ignore();
	getline(cin, name);
	cout << "\n";


	int age;
	cout << "enter age(int): ";
	cin >> age;
	cout << "\n";


	char gender;
	cout << "enter gender(char): ";
	cin >> gender;
	cout << "\n";


	string adress;
	cout << "enter adress(string): ";
	//cin >> adress;
	cin.ignore();
	getline(cin, adress);
	cout << "\n";


	bool married;
	cout << "enter married(bool): ";
	cin >> married;
	cout << "\n";


	string heightRaw;
	cout << "enter heigt(string), ex 1.82: ";
	cin.ignore();
	getline(cin, heightRaw);
	cout << "\n";

	newEntry.name = name;
	newEntry.age = age;
	newEntry.gender = gender;
	newEntry.adress = adress;
	newEntry.married = married;
	newEntry.height = stof(heightRaw);
	
	return newEntry;
}

void Output(Entry input) {
	cout << "Name: " << input.name << endl;
	cout << "Age: " << input.age << endl;
	cout << "Gender: " << input.gender << endl;
	cout << "Adress: " << input.adress << endl;
	cout << "Married: " << input.married << endl;
	cout << "Height: " << input.height << endl;
}


int main() {
	cout << "Personal Record program \n";
	cout << "___ Input ___\n";
	Entry entry = Input();
	cout << "\n";
	cout << "___ Output ___\n";
	Output(entry);
	cout << "Personal Record program \n";
	
	return 1337;
}