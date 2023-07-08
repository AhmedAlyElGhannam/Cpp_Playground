#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int min, mid, max;	
	
	if ((a < b) && (a < c)) // a is min
	{
		if (b < c)
		{
			min = a;
			mid = b;
			max = c;
		}
		else // b > c
		{
			min = a;
			mid = c;
			max = b;
		}
	}
	else if ((a > b) && (a > c)) // a is max
	{
		if (b < c)
		{
			min = b;
			mid = c;
			max = a;
		}
		else // b > c
		{
			min = c;
			mid = b;
			max = a;
		}
		
	}
	else // a is mid
	{
		if (b < c)
		{
			min = b;
			mid = a;
			max = c;
		}
		else // b > c
		{
			min = c;
			mid = a;
			max = b;
		}
	}
	
	cout << min << " " << mid << " " << max << endl;
	
	return 0;
}