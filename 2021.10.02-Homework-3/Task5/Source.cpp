#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			cout << i << endl;
		}
	}

	return EXIT_SUCCESS;
}