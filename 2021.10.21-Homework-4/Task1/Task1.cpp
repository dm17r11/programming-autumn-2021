#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "EVEN: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl << "SUM: ";
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    cout << s << endl;
    int p = 1;
    cout << "PRODUCT OF NEGATIVE: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            p *= arr[i];
        }
    }
    cout << p << endl;
    int min = arr[0];
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            mini = i;
        }
    }
    cout << "FIRST MIN INDEX: " << mini << endl;
    int max = arr[0];
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
    }
    int max2 = min;
    for (int i = 0; i < n; i++)
    {
        if (i != maxi && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    cout << "SECOND MAX: " << max2 << endl;
    cout << "REVERSE: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "ODD INDEXES: ";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}