#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	int n = 0;
	int m = 0;
	int k = 0;

	cin >> n >> m >> k;

	cout << ((k < n * m) && (k % n == 0 || k % m == 0) ? "YES" : "NO");

	return EXIT_SUCCESS;
}