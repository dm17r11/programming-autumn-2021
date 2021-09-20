#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	n = abs(n);
	cout << (n % 10) + (n / 10 % 10) + (n / 100);
	return 0;
}