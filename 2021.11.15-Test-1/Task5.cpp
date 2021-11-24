#include <iostream>

using namespace std;

int numbers1[100001];
int numbers2[100001];

int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);

	int n = 0;
	int m = 0;
	cin >> n >> m;

	for (int i = 0; i < 100001; ++i)
	{
		numbers1[i] = 0;
		numbers2[i] = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		numbers1[a] = 1;
	}

	for (int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;
		numbers2[a] = 1;
	}

	for (int i = 0; i < 100001; ++i)
	{
		if (numbers1[i] * numbers2[i] == 1)
		{
			cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}