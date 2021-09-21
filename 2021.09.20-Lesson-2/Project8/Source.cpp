#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int h = 0;
	int m = 0;
	int s = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;
	cin >> h >> m >> s >> h2 >> m2 >> s2;
	cout << (h2 - h) * 3600 + (m2 - m) * 60 + s2 - s;
	return 0;
}