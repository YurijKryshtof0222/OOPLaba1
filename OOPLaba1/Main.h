#pragma once
#include <math.h>

class B 
{

private:
	double x;
	double y;
	double z;
public:
	B(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double calculate()
	{
		double result = y + atan(pow(abs(x * x + z), 0.1));
		result /= 3/x + pow(sin(pow(y + z, 3)), 2);
		result += y * exp(-(x + z) / (y + z));
		return x * result;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getZ()
	{
		return z;
	}

};

class A : public B
{

private:
	double b;

public:
	
	A(double x, double y, double z, double b): B(x, y, z)
	{
		this->b = b;
	}

	double calculate()
	{
		double result = sqrt(pow( abs(getX() * getX() - getZ()), 0.3));
		result -= pow(abs(getY() + 2 * getB()), 1 / 3.0);
		result /= 1 + (pow(getX(), 1) / fac(1)) + (pow(getY(), 2) / fac(2)) + (pow(getZ(), 3) / fac(3));
		return result;
	}

	double fac(int a)
	{
		if (a <= 1)
		{
			return 1;
		}

		return fac(a - 1) * a;
	}

	double getB()
	{
		return b;
	}

};