#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    double** values = new double*[3];
    values[0] = new double[3]{ 1, 2, 3 };
    values[1] = new double[3]{ 1, 4, 4 };
    values[2] = new double[3]{ 1, 2, 5 };
    Matrix A(3, values);

    values[0] = new double[3]{ 3, 2, 1 };
    values[1] = new double[3]{ 5, 9, 8 };
    values[2] = new double[3]{ 3, 6, 3 };
    Matrix B(3, values);

    values[0] = new double[3]{ 1, 0, 0 };
    values[1] = new double[3]{ 0, 1, 0 };
    values[2] = new double[3]{ 0, 0, 1 };
    Matrix E(3, values);

    std::cout << "A=\n" << A;
    std::cout << "B=\n" << B;
    std::cout << "E=\n" << E;

    std::cout << "\n|A| = " << A.det() << "\n";
    std::cout << "|E| = " << E.det() << "\n";
    std::cout << "A + B = \n" << A + B << "\n";
    std::cout << "A - B = \n" << A - B << "\n";
    std::cout << "A * E = \n" << A * E << "\n";
    std::cout << "E^-1 = \n" << E.inverse() << "\n";
    std::cout << "A * B = \n" << A * B << "\n";
    std::cout << "A^-1 = \n" << A.inverse() << "\n";
    std::cout << "A / B = \n" << A / B << "\n";
}