#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	// (ax + b) : (cx + d) = 0.
	// <=>
	// x = -b/a
	// x != -d/c

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	if (a == 0) {
		cout << (b == 0 ? "INF" : "NO");
		return EXIT_SUCCESS;
	}

	if (b % a != 0) {
		cout << "NO";
		return EXIT_SUCCESS;
	}

	int x = -b / a;
	if (x * c == -d) {
		cout << "NO";
	}
	else {
		cout << x;
	}

	return EXIT_SUCCESS;
}