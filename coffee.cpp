#include <iostream>
#include <cmath>

using namespace std;

void initial(double&,double&,double&,double&,double&,double&,size_t&);
void Euler(double&,double&,double&,double&,double&);
void output(double&,double&,double&);

int main()
{
	double t, T_coffee, T_room, r, delta_t, tmax;
	size_t nshow;
	size_t counter = 0;
	initial(t, T_coffee, T_room, r, delta_t, tmax, nshow);
	while(t <= tmax)
	{
		Euler(t, T_coffee, T_room, r, delta_t);
		counter++;
		if (counter % nshow == 0)
		{
			output(t, T_coffee, T_room);
		}
	}
	return 0;
}

void initial(double& t, double& T_init, double& T_room, double& r, double& delta_t, double& tmax, size_t& nshow)
{
	double tshow;
	t = 0;
	T_init = 82.3;
	T_room = 17;
	cout << "cooling constant r : ";
	cin >> r;
	cout << endl;
	cout << "time step dt : ";
	cin >> delta_t;
	cout << endl;
	cout << "duration of run : ";
	cin >> tmax;
	cout << endl;
	cout << "time between output of data : ";
	cin >> tshow;
	cout << endl;
	nshow = round(tshow/delta_t);
	output(t, T_init, T_room);
}

void Euler(double& t, double& T_coffee, double& T_room, double& r, double& delta_t)
{
	double change = -r * (T_coffee - T_room) * delta_t;
	T_coffee += change;
	t += delta_t;
}

void output(double& t, double& T_coffee, double& T_room)
{
	if (t == 0)
	{
		cout << endl;
		cout << "time (min)\t" << "T_coffee\t" << "T_coffee - T_room" << endl;
		cout << endl;
	}
	cout << t << "\t";
	cout << T_coffee << "\t";
	cout << T_coffee - T_room << endl;
}
