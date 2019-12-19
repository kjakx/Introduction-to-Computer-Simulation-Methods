#include <iostream>

using namespace std;

void swap(int& a, int& b);

int main()
{
	int a = 5;
	int b = 10;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
}

void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
