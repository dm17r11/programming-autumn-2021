#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int n = 0;
	cin >> n;
	int f = 1;
	for (int i = 0; i < n; ++i) 
	{
		f *= 2;
	}

	cout << f;

	return EXIT_SUCCESS;
}