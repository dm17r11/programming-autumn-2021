// x^4 + x^3 + x^2 + x + 1

#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;
	int x2 = x * x;
	cout << x2 * (x2 + x) + x2 + x + 1;
	return 0;
}