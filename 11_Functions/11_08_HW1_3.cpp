#include <iostream>
#include <string>
using namespace std;

double add(double a, double b)
{
	return (a + b);
}

double sub(double a, double b)
{
	return (a - b);
}

double mul(double a, double b)
{
	return (a * b);
}

double div(double a, double b)
{
	if (b == 0)
		return -1;
	
	return (a / b);
}


void calculator(double &a, double &b)
{
	cout << add(a, b) << endl
		 << sub(a, b) << endl
		 << mul(a, b) << endl
		 << div(a, b) << endl;
}

int main()
{	
	double a, b;
	cin >> a >> b;
	calculator(a, b);
	return 0;
}
