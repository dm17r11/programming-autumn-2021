#include <iostream>

using namespace std;

int main() {
	int h, m, s, h2, m2, s2;
	cin >> h >> m >> s >> h2 >> m2 >> s2;
	cout << (h2 - h) * 3600 + (m2 - m) * 60 + s2 - s;
	return 0;
}