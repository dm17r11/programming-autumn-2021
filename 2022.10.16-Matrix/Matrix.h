#pragma once
#include <iostream>

using namespace std;

class Matrix
{
private:
    long long n;
    double** data;

    double subdet(int lvl, unsigned int mask) const;
public:
    Matrix();

    Matrix(int n);

    Matrix(int n, double** values);

    Matrix(const Matrix& obj);

    ~Matrix();

    double det() const;

    Matrix inverse() const;

    Matrix& operator = (const Matrix& obj);

    bool operator == (const Matrix& obj2);

    Matrix operator + (const Matrix& r);

    Matrix operator - (const Matrix& r);

    Matrix operator * (const Matrix& r);

    Matrix operator / (const Matrix& r);

    friend ostream& operator << (ostream& os, const Matrix& mat);
};