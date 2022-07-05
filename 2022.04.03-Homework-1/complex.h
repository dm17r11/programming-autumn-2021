#pragma once
#include <ostream>

using namespace std;

class Complex
{
private:
	double re;
	double im;
	double sqrabs();
public:
	Complex(double re = 0, double im = 0);
	Complex(const Complex& complex);
	~Complex();
	void set(double re, double im);
	void setRe(double re);
	void setIm(double im);
	double getRe();
	double getIm();
	Complex& operator=(Complex& complex);
	double abs();
	double arg();
	Complex reverse();
	void sqrt(int n, ostream& stream);
	friend Complex operator*(Complex complex1, Complex complex2);
	friend Complex operator*(double d, Complex complex);
	friend Complex operator*(Complex complex, double d);
	friend Complex operator+(Complex complex1, Complex complex2);
	friend Complex operator/(Complex complex1, Complex complex2);
	friend Complex operator-(Complex complex1, Complex complex2);
	friend ostream& operator<<(ostream& stream, const Complex& complex);
};