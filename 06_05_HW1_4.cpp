#include <iostream>
using namespace std;

int main()
{
	int x;
	int a, b, c, d, e;
	
	cin >> x >> a >> b >> c >> d >> e;
	
	int is_less_counter = 0;
	int is_more_counter = 0;

	if (a <= x)
	{
		is_less_counter++;
	}
	else
	{
		is_more_counter++;
	}
	
	if (b <= x)
	{
		is_less_counter++;
	}
	else
	{
		is_more_counter++;
	}
	
	if (c <= x)
	{
		is_less_counter++;
	}
	else
	{
		is_more_counter++;
	}
	
	if (d <= x)
	{
		is_less_counter++;
	}
	else
	{
		is_more_counter++;
	}
	
	if (e <= x)
	{
		is_less_counter++;
	}
	else
	{
		is_more_counter++;
	}
	
	cout << is_less_counter << " " << is_more_counter << endl;
	
	return 0;
}