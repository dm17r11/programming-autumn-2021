#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	int xf = 0;
	int yf = 0;
	int xo = 0;
	int yo = 0;

	cin >> xf >> yf >> xo >> yo;

	cout << (xf == xo || yf == yo || (abs(xf - xo) == abs(yf - yo)) ? "YES" : "NO");

	return EXIT_SUCCESS;
}