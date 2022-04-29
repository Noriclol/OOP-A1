#include <iostream>

using namespace std;

void BounceFunc(int n) {
	int b = n;
	bool reachedZero = false;
	while (n > 0) {
		cout << n << endl;
		n--;
	}
	while (n <= b) {
		cout << n << endl;
		n++;
	}
}

int main() {
	int Input;
	cin >> Input;
	BounceFunc(Input);
}