// x^4 + x^3 + x^2 + x + 1

#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;

	int d = (b - a);
	int s = (2 * d + 1) % 2;
	int b_more_than_a = (s + 1) % 2 + (s + 1) / 2;
	cout << b_more_than_a * b + ((1 + b_more_than_a) % 2) * a << "\n";

	return 0;
}