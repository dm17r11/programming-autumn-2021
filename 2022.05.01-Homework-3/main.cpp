#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	cout << list << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;

	list = LinkedList();

	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);

	cout << endl;
	cout << list << endl;
	cout << "extract(4): " << list.extract(4) << endl;
	cout << "extract(2): " << list.extract(2) << endl;
	cout << "extract(0): " << list.extract(0) << endl;
	cout << "extract(0): " << list.extract(0) << endl;
	cout << "extract(0): " << list.extract(0) << endl;

	cout << endl;
	cout << list << endl;
	
	list = LinkedList();

	list.insert(1, 0);
	list.insert(0, 0);
	list.insert(3, 2);
	list.insert(2, 2);

	cout << list << endl;

	list.swap(0, 3);
	list.swap(1, 2);

	cout << list << endl;


    return EXIT_SUCCESS;
}