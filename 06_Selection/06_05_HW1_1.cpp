#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	if (a % 2 == 0)
	{
		if ((b % 2 == 0) && (b != 0))
		{
			cout << (double)a / (double)b << endl; 
		}
		else
		{
			cout << a - b << endl;
		}
	}
	else
	{
		if (b % 2 == 1)
		{
			cout << a * b << endl;
		}
		else
		{
			cout << a + b << endl;
		}
	}
	
	
	return 0;
}