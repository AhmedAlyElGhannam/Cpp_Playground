#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char sign;
	
	cin >> a >> sign >> b;
	
	if (sign == '+')
	{
		cout << a + b << endl;
	}
	else if (sign == '-')
	{
		cout << a - b << endl;
	}
	else if (sign == '*')
	{
		cout << a * b << endl;
	}
	else if (sign == '/')
	{
		cout << a / b << endl;
	}
	
	
	return 0;
}