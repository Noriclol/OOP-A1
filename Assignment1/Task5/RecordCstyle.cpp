#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Entry {
public:

	char* name;
	int age;
	char gender;
	char* adress;
	int married;
	float height;

};


Entry Input() {
	Entry newEntry;

	char name[50];
	printf_s("enter name(string): ");
	fgets(name, sizeof(name), stdin);
	printf_s("\n");

	int age;
	printf_s("enter age(int): ");
	scanf_s("%i", &age);
	printf_s("\n");

	char gender;
	//fgets(gender, sizeof(gender), stdin);
	scanf_s("%c", &gender, sizeof(gender));
	printf_s("\n");

	char adress[50];
	printf_s("enter adress(string): ");
	fgets(adress, sizeof(adress), stdin);
	printf_s("\n");

	int married;
	printf_s("enter married(true:1 / false:0): ");
	scanf_s("%i", &married);
	printf_s("\n");

	float height;
	printf_s("enter heigt(string), ex 1.82: ");
	scanf_s("%f", &height);
	printf_s("\n");



	newEntry.name = name;
	newEntry.age = age;
	newEntry.gender = gender;
	newEntry.adress = adress;
	newEntry.married = married;
	newEntry.height = height;

	return newEntry;
}

void Output(Entry input) {

	printf_s("Name: %s \n", input.name);
	printf_s("Age: %i \n", input.age);
	printf_s("Gender: %c \n", input.gender);
	printf_s("Adress: %s \n", input.adress);
	printf_s("Married: %i \n", input.married);
	printf_s("Height: %f \n", input.height);

}


int main() {
	printf_s("Personal Record program \n""___ Input ___\n");

	Entry entry = Input();
	
	printf_s("___ Output ___\n");
	Output(entry);

	return 1337;
}