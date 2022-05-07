#include <iostream>
#include <fstream>

#include <string>
#include "string"
#include <string.h>

#include <algorithm>



using namespace std;


bool get_bool(std::istream& is) {


	string temp;
	std::getline(is, temp);

	if (temp[0] == 't' || temp[0] == 'T' || isalnum(temp[0]) == 1)
	{
		return true;
	}
	else if (temp[0] == 'f' || temp[0] == 'F' || isalnum(temp[0]) == 0)
	{
		return false;
	}
	else
		return false;
}

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

	cout << "enter married(bool): ";
	//cin.ignore();
	bool married;// = get_bool(cin);
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