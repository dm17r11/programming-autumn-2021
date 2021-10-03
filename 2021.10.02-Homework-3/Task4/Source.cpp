#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	
	int c1 = 1;
	int d1 = 1;

	for (int i = k + 1; i <= n; ++i) 
	{
		c1 *= i;
	}

	for (int i = 2; i <= n - k; ++i)
	{
		d1 *= i;
	}


	cout << c1 / d1 << endl;

	return EXIT_SUCCESS;
}