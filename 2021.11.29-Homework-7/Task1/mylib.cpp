#include "mylib.h"
#include <cmath>
#include <iostream>

using namespace std;

int count_steps(int n)
{
	int s = 0;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}

		++s;
	}
	return s;
}

void print_circle(int r)
{ 
	int d = r * 2;

	for (int x = 0; x <= d; ++x)
	{
		for (int y = 0; y <= d; ++y)
		{
			int dx = x - r;
			int dy = y - r;
			float dist = sqrt(dx * dx + dy * dy);

			if (dist > (float)r - 0.5 && dist < (float)r + 0.5)
			{ 
				cout << "*";
			}
			else
			{ 
				cout << " ";
			}
		}
		cout << endl;
	}
}