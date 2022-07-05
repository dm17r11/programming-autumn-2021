#define _USE_MATH_DEFINES

#include "complex.h"
#include <cmath>

using namespace std;

double Complex::sqrabs() 
{
	return re*re + im*im;
}

Complex::Complex(double re, double im) :re(re), im(im) {}

Complex::Complex(const Complex& complex) :re(complex.re), im(complex.im) {}

Complex::~Complex() {
	re = 0;
	im = 0;
}

void Complex::set(double re, double im)
{
	this->re = re;
	this->im = im;
}

void Complex::setRe(double re)
{
	this->re = re;
}

void Complex::setIm(double im)
{
	this->im = im;
}

double Complex::getRe()
{
	return re;
}

double Complex::getIm()
{
	return im;
}

Complex& Complex::operator=(Complex& complex) 
{
	this->re = complex.re;
	this->im = complex.im;

	return *this;
}

double Complex::abs() 
{
	return std::sqrt(sqrabs());
}

double Complex::arg() 
{
	return std::atan2(this->im, this->re);
}

Complex Complex::reverse() 
{
	return Complex(this->re / sqrabs(), -this->im / sqrabs());
}

void Complex::sqrt(int n, ostream& stream) 
{
	double r = pow(abs(), 1. / n);
	double a0 = arg();

	stream << "{";

	for (int k = 0; k < n; ++k)
	{
		double a = (a0 + 2 * M_PI * k) / n;
		stream << Complex(r * cos(a), r * sin(a));

		if (k < n - 1)
		{
			stream << ", ";
		}
	}

	stream << "}";
}

Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.re * complex2.im + complex2.re * complex1.im);
}

Complex operator*(double d, Complex complex)
{
	return Complex(complex.re * d, complex.im * d);
}

Complex operator*(Complex complex, double d)
{
	return Complex(complex.re * d, complex.im * d);
}

Complex operator+(Complex complex1, Complex complex2)
{
	return Complex(complex1.re + complex2.re, complex1.im + complex2.im);
}

Complex operator/(Complex complex1, Complex complex2)
{
	return complex1 * complex2.reverse();
}

Complex operator-(Complex complex1, Complex complex2)
{
	return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}

ostream& operator<<(ostream& stream, const Complex& complex)
{
	if (complex.im == 0)
	{
		stream << complex.re;
	}
	else
	{
		if (complex.re == 0)
		{
			if (complex.im == 1)
			{
				stream << 'i';
			}
			else
			{
				stream << complex.im << 'i';
			}
		}
		else
		if (complex.re != 0) 
		{
			stream << complex.re;
			
			if (complex.im < 0)
			{
				stream << " - ";
			}
			else
			{
				stream << " + ";
			}

			if (abs(complex.im) == 1)
			{
				stream << 'i';
			}
			else
			{
				stream << abs(complex.im) << 'i';
			}
		}
	}

	return stream;
}
