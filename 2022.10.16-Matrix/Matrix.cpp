#include "Matrix.h"

using namespace std;

ostream& operator << (ostream& os, const Matrix& mat)
{
    for (int i = 0; i < mat.n; ++i)
    {
        os << "[ ";
        for (int j = 0; j < mat.n; ++j)
        {
            os << mat.data[i][j] << " ";
        }
        os << " ]\n";
    }

    return os;
}

Matrix::Matrix() 
{
    n = 0;
    data = nullptr;
}

Matrix::Matrix(int n) 
{
    this->n = n;

    data = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        data[i] = new double[n];
        for (int j = 0; j < n; ++j)
        {
            data[i][j] = 0;
        }
    }
}

Matrix::Matrix(int n, double** values)
{
    this->n = n;

    data = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        data[i] = new double[n];
        for (int j = 0; j < n; ++j)
        {
            data[i][j] = values[i][j];
        }
    }
}

Matrix::Matrix(const Matrix& obj)
{
    n = obj.n;

    data = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        data[i] = new double[n];
        for (int j = 0; j < n; ++j)
        {
            data[i][j] = obj.data[i][j];
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < n; ++i)
    {
        delete[] data[i];
    }
    delete[] data;
    n = 0;
}

Matrix& Matrix::operator=(const Matrix& obj) {
    n = obj.n;

    data = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        data[i] = new double[n];
        for (int j = 0; j < n; ++j)
        {
            data[i][j] = obj.data[i][j];
        }
    }

    return *this;
}

double Matrix::subdet(int lvl, unsigned int mask) const
{
    if (lvl == n)
        return 1;

    double s = 0;

    int local_i = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((mask >> i) % 2)
        {
            s += (local_i % 2 ? -1 : 1) * data[i][lvl] * subdet(lvl + 1, mask & ~(1 << i));
            ++local_i;
        }
    }

    return s;
}

double Matrix::det() const
{
    return subdet(0, ~0);
}

bool Matrix::operator == (const Matrix& obj2) {
    if (n != obj2.n)
        return false;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (data[i][j] != obj2.data[i][j])
                return false;
        }
    }

    return true;
}

Matrix Matrix::operator + (const Matrix& r) {
    Matrix res(n, data);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            res.data[i][j] += r.data[i][j];
        }
    }

    return res;
}

Matrix Matrix::operator - (const Matrix& r) {
    Matrix res(n, data);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            res.data[i][j] -= r.data[i][j];
        }
    }

    return res;
}

Matrix Matrix::operator * (const Matrix& r) {
    Matrix res(n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            for (int k = 0; k < n; ++k)
            {
                res.data[i][j] += data[i][k] * r.data[k][j];
            }
        }
    }

    return res;
}

Matrix Matrix::operator / (const Matrix& r) {
    return *this * r.inverse();
}

Matrix Matrix::inverse() const
{
    if (n == 1) {
        Matrix res(1, data);
        res.data[0][0] = 1 / res.data[0][0];
        return res;
    }

    double det_ = det();

    Matrix res(n);

    Matrix adj(n - 1);
    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            int i_local = 0;

            for (int i = 0; i < n; ++i)
            {
                int j_local = 0;

                if (i == x)
                {
                    continue;
                }

                for (int j = 0; j < n; ++j)
                {
                    if (j == y)
                    {
                        continue;
                    }

                    adj.data[i_local][j_local] = data[i][j];

                    ++j_local;
                }
                ++i_local;
            }

            res.data[y][x] = adj.det() * ((x + y) % 2 ? -1 : 1) / det_;
        }
    }

    return res;
}