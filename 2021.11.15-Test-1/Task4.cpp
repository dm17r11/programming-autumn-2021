#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	cin >> n;

	int max = -10000;
	int min = 10000;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];

		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == max)
		{
			cout << min << " ";
		}
		else
		{
			cout << arr[i] << " ";
		}
	}

	return EXIT_SUCCESS;
}