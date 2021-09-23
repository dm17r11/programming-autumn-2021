#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;

	if (n < k) {
		cout << 2 * m;
		return EXIT_SUCCESS;
	}
	else
	{
		if (n * 2 % k == 0)
		{
			cout << (n * 2 / k) * m;
		}
		else
		{
			cout << ((n * 2 / k) + 1) * m;
		}
	}

	return EXIT_SUCCESS;
}