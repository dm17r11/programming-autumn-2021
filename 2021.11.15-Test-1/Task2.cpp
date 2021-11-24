#include <fstream>

using namespace std;


ifstream in("input.txt");
ofstream out("output.txt");


int main(int argc, char** argv)
{
	int min = 10000001;
	int max = -10000001;
	int i = 0;
	int a = 0;
	while (in >> a)
	{
		++i;
		if (i % 2 == 1)
		{
			if (a < min)
			{
				min = a;
			}
		}
		else
		{
			if (a > max) 
			{
				max = a;
			}
		}
	}
	out << max + min;
	
	return EXIT_SUCCESS;
}
