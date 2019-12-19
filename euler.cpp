#include <iostream>

using namespace std;

double f(double);
void input(double&, double&, double&, double&);

int main()
{
	double y_ini, x_ini, dx, x_fin;
	input(y_ini, x_ini, x_fin, dx);
	double y = y_ini;
	cout << "x\ty" << endl;
	cout << x_ini << "\t" << y_ini << endl;
	for (double x = x_ini; x <= x_fin; x += dx)
	{
		y = y + f(x) * dx;
		cout << x + dx << "\t" << y << endl;
	}
}

double f(double x)
{
	return 2 * x;
}

void input(double& y_ini, double& x_ini, double& x_fin, double& dx)
{
	cin >> y_ini >> x_ini >> x_fin >> dx;
}

