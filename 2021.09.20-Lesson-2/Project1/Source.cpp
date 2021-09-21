#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	cout << "The next number for the number " << n << " is " << n + 1 << ".\n";
	cout << "The next previous for the number " << n << " is " << n - 1 << ".\n";
	return 0;
}