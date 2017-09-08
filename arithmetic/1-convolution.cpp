#include <iostream>

using namespace std;

int main() {
	int a = 11;
	int b = 13;
	int c = 5;
	int d = b * c;
	b = d * c;
	c = c * b;
	int result = a + c;

	cout << result << endl;

	return 0;
}
