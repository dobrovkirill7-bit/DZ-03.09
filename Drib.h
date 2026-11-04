#pragma once
class Complex
{
	double _x, _y;
public:
	Complex(double x, double y) : _x(x), _y(y){}

	Complex operator+(const Complex& other) const
	{
		return Complex(_x + other._x, _y + other._y);
	}

	Complex operator-(const Complex& other) const
	{
		return Complex(_x - other._x, _y - other._y);
	}

	Complex operator*(const Complex& other) const
	{
		return Complex(_x * other._x, _y * other._y);
	}

	Complex operator/(const Complex& other) const
	{
		return Complex(_x / other._x, _y / other._y);
	}
};

