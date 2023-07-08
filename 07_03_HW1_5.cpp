#include <iostream>
using namespace std;

int main()
{
	int n;	
	cin >> n;
	
	int i = n;
	
	int num;
	int even_avg = 0;
	int odd_avg = 0;
	int even_counter = 0;
	int odd_counter = 0;
	
	while (i > 0)
	{
		cin >> num;
		
		if ((n - i + 1) % 2 == 0)
		{
			even_counter++;
			even_avg += num;
		}
		else
		{
			odd_counter++;
			odd_avg += num;
		}
		
		i--;
	}

	odd_avg /= odd_counter;
	even_avg /= even_counter;
	
	cout << odd_avg << " " << even_avg << endl;
	
	return 0;
}