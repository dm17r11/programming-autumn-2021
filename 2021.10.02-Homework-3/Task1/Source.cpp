#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int n = 0;
	cin >> n;
	int f = 1;
	while (n > 1) 
	{
		f *= n;
		--n;
	}

	cout << f;

	return EXIT_SUCCESS;
}