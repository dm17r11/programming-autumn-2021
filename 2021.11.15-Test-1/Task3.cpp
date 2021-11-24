#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) 
		return a;

	return gcd(b, a % b);
}

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;

	cin >> a >> b;
	cout << a * b / gcd(a, b);

	return EXIT_SUCCESS;
}