#include <iostream>
#include "ArrayList.h"
#include <random>

using namespace std;

int main(int argc, char** argv)
{
	ArrayList list(5);
	cout << list << endl;
	list.pushend(5);
	cout << list << endl;
	list.pushend(4);
	list.pushend(3);
	list.pushend(2);
	list.pushend(1);
	cout << list << endl;
	list.pushend(0);
	cout << list << endl;
	cout << list.extractend() << endl;
	cout << list << endl;

	list[1] = 1;
	cout << list << endl;
	list[5] = 10;
	cout << list << endl;
	list[16] = 20;
	cout << list << endl;
	list[-2] = 20;
	cout << list << endl;
	

	for (int i = 0; i < 20; ++i)
	{
		list[i] = rand() % 100;
	}

	cout << endl;
	cout << list << endl;

	list.sort();

	cout << list << " - sorted list " << endl;

	return EXIT_SUCCESS;
}