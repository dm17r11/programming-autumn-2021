#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		int t = c;
		c = b;
		b = t;
	}
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}

	if (a + b <= c) {
		cout << "impossible";
		return EXIT_SUCCESS;
	}
	if (c * c == a * a + b * b)
	{
		cout << "right";
		return EXIT_SUCCESS;
	}

	cout << ((c * c < a * a + b * b) ? "acute" : "obtuse");

	return EXIT_SUCCESS;
}