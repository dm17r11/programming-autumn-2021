#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int k = 0;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		int n = 0;
		int m = 0;
		cin >> n >> m;
		cout << 19 * m + (n + 239) * (n + 366) / 2 << endl;
	}

	return EXIT_SUCCESS;
}
