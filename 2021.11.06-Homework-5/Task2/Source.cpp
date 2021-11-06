#include <iostream>

using namespace std;

int main()
{
    double d = 0;
    long long l = 0;
    cin >> d;
    l = *((long long*)&d);
    for (int i = sizeof(double) * 8 - 1; i >= 0; --i)
    {
        cout << ((l & ((long long)1 << i)) != 0);
    }
    return EXIT_SUCCESS;
}
