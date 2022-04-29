#include <iostream>
#include "HelloWorld.h"

using namespace std;

void HelloBasic()
{
	cout << "Hello World!\n\n";
}

void HelloFor(int n)
{
	std::cout << "For Loop Selected\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << "iteration: " << i + 1 << "\n";
		HelloBasic();
	}
}

void HelloWhile(int n)
{
	std::cout << "While Loop Selected\n\n";
	int count = 0;
	while (count < n)
	{
		cout << "iteration: " << count + 1 << "\n";
		HelloBasic();
		count++;
	}
}

void HelloDoWhile(int n)
{
	std::cout << "DoWhile Loop Selected\n\n";
	int count = 0;
	do {
		cout << "iteration: " << count + 1 << "\n";
		HelloBasic();
		count++;
	} while (count < n);
}

void Menu()
{

	cout << "Hello World Menu\n:-:-:-:-:-:-:\n";
	cout << "\n1. Basic Hello World\n";
	cout << "\n2. For Loop\n";
	cout << "\n3. While Loop\n";
	cout << "\n4. DoWhile Loop\n";
	int n, x;

	cout << "\nEnter Int per selected option\n";
	cin >> x;

	switch (x)
	{
	case 1:
		HelloBasic();
		break;
	case 2:
		cout << "enter loop length" << endl;
		cin >> n;
		HelloFor(n);
		break;

	case 3:
		cout << "enter loop length" << endl;
		cin >> n;
		HelloWhile(n);
		break;

	case 4:
		cout << "enter loop length" << endl;
		cin >> n;
		HelloDoWhile(n);
		break;
	}
}

int main()
{

	Menu();
	return 0;
}






