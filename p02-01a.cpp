#include <iostream>
#include <cmath>

using namespace std;

void setParams(double&, double&, double&, double&, double&);
double f(double, double, double);

int main()
{
	double a, b, x_min, x_max, dx;
	setParams(a, b, x_min, x_max, dx);
	for (double x = x_min; x < x_max; x += dx)
	{
		cout << "x : " << x << "\t";
		cout << "f(x) : " << f(x, a, b) << endl;
	}
}

void setParams(double& a, double& b, double& x_min, double& x_max, double& dx)
{
	cin >> a >> b >> x_min >> x_max >> dx;
}

double f(double x, double a, double b)
{
	return a * exp(-b * x);
}
