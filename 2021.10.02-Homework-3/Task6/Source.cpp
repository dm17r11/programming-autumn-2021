#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	cin >> n;
	int p = 0;
	int z = 0;
	int neg = 0;

	for (int i = 0; i < n; ++i) {
		int a = 0;
		cin >> a;

		if (a == 0)
		{
			++z;
		}
		else
		{
			if (a > 0)
			{
				++p;
			}
			else
			{
				++neg;
			}
		}
	}

	cout << z << " " << p << " " << neg;

	return EXIT_SUCCESS;
}