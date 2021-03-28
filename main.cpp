#include "3.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int real, imaginary;
	cout << "Введите \"Комплексное число\" в виде:\n-действительной\n-мнимой\nчастей комплексного числа:\nreal = ";
	cin >> real;
	cout << "imagine = ";
	cin >> imaginary;
	Complex z(real, imaginary);
	cout << "z = " << z;
	cout << "\nf(z) = 1 - z^5 - th(z/2)\nf(z) = 1 - (" << pow(z, 5) << ") - (" << tanh(z / Complex(2, 0)) << ") = " << (Complex(1, 0) - pow(z, 5) - tanh(z / Complex(2, 0)));
	_getch();
}

int factorial(int x)
{
	if (x == 0) return 1;
	return x * factorial(x - 1);
}
