#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int x = n >> 31;
    cout << (n ^ x) - x;
    return EXIT_SUCCESS;
}
