#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool is_prime;
	bool first_print = true;
	
	for (int a = 2; a <= n; a++)
	{
		is_prime = true;
		
		for (int i = 2; i <= a; i++)
		{
			if (a % i == 0)
			{
				is_prime = false;
				break;
			}
		}
		
		if (is_prime)
		{
			if (!first_print)
			{
				cout << ", ";
			}
			
			cout << a;
			first_print = false;
		}
		
	}
	
	cout << endl;
	
	return 0;
}