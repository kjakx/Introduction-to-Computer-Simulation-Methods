#include <iostream>
#include <cmath>

using namespace std;

void setParams(double&, double&, double&, double&, double&);
double f1(double);
double f2(double);
double f3(double);
double f4(double);

int main()
{
	double a, b, x_min, x_max, dx;
	setParams(a, b, x_min, x_max, dx);
	cout << "x" << "\t";
	cout << "f1(x)" << "\t";
	cout << "f2(x)" << "\t";
	cout << "f3(x)" << "\t";
	cout << "f4(x)" << endl;
	for (double x = x_min; x < x_max; x += dx)
	{
		cout << "x : " << x << "\t";
		cout << "f1(x) : " << f1(x) << "\t";
		cout << "f2(x) : " << f2(x) << "\t";
		cout << "f3(x) : " << f3(x) << "\t";
		cout << "f4(x) : " << f4(x) << endl;
	}
}

void setParams(double& a, double& b, double& x_min, double& x_max, double& dx)
{
	cin >> x_min >> x_max >> dx;
}

double f1(double x)
{
	return x;
}

double f2(double x)
{
	return pow(x, 2);
}

double f3(double x)
{
	return pow(2, x) - 1;
}

double f4(double x)
{
	return 1 + log(x);
}
