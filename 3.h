#pragma once
#include "iostream"
#include "conio.h"

using namespace std;

class Complex
{
	double real, imaginary;
public:
	double getReal() const;
	double getImaginary() const;
	void setReal(double real);
	void setImaginary(double imaginary);
	Complex(double real, double imaginary);
	friend ostream & operator << (ostream & stream, const Complex &z);
	friend Complex operator -(Complex a, Complex b);
	friend Complex operator /(Complex a, Complex b);
	friend Complex pow(const Complex &z, int stepen);
	friend Complex tanh(const Complex &z);
};

int factorial(int x);
