#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	cin >> n;
	int s = 0;

	for (int i = 0; i < n; ++i) {
		int a = 0;
		cin >> a;
		s += a;
	}

	cout << s;

	return EXIT_SUCCESS;
}