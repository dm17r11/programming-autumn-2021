#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	int n = 0;
	cin >> n;

	cout << ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0) ? "YES" : "NO");

	return EXIT_SUCCESS;
}