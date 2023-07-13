#include <iostream>
#include <string>
using namespace std;

int my_pow(int value, int p = 2)
{
	if (p == 1)
	{
		return value;
	}
	
	return (value * my_pow(value, p - 1));
}


int main()
{	
	cout << my_pow(7, 3) << endl;
	return 0;
}
