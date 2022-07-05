#include <iostream>
#include "complex.h"

int main(int argc, char** argv)
{
	Complex z1(3, 1);
	Complex z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.abs() << endl; //модуль числа
	cout << z2.arg() << endl; //аргумент числа
	cout << z1.reverse() << endl; //обратное число
	z1.sqrt(5, cout); //вывод в поток cout формулы корней пятой степени
	return EXIT_SUCCESS;
}