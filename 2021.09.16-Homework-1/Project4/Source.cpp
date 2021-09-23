#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int v = 0;
	int t = 0;
	cin >> v >> t;
	cout << (109 + (v * t) % 109) % 109 << "\n";
	return 0;
}