#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int a = 0;
    int b = 0;
    cin >> n >> a >> b;
    n ^= ((1 << a) | (1 << b));
    cout << n << "\n";
    return EXIT_SUCCESS;
}
