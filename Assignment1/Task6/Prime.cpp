#include <iostream>

using namespace std;

bool is_prime(int number) {
	bool TEST = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			TEST = false;
	}
	return TEST;
}

void PrimeFunc() {
	int input, count = 0;

	cin >> input;

	int i = 2;
	while (count < input) {
		if (is_prime(i)) {
			cout << i << "  ";

			count++;
		}
		i++;
	}
}

int main() {
	cout << "Enter the amount of primes you wish to list(int): ";
	PrimeFunc();
	return 0;
}