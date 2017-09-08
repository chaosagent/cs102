#include <iostream>

using namespace std;

int main() {
	int a = 987654321;
	int b = 123456789;

	b = a + b;

	a = b - a;

	b = b - a;

	cout << a << endl;
	cout << b << endl;

	return 0;
}