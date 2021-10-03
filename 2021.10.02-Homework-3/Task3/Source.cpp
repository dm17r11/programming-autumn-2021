#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int n = 0;
	cin >> n;
	int d = 0;
	for (int i = 0; d < n; ++i) 
	{
		for (int j = 0; j <= i; ++j) 
		{
			cout << ++d << " ";
			if (d == n)
			{
				break;
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}