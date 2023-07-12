#include <iostream>
#include <string>
using namespace std;

bool is_prime(int n)
{
	for (int i = 2; i < n/2; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int nth_prime(int n)
{
	for (int i = 2; i < 9000; i++)
	{
		if (is_prime(i))
		{
			if (!n)
				return i;
			n--;
		}
	}
	return -1;
}

int main()
{	
	int n;
	cin >> n;
	
	cout << is_prime(n) << endl;
	cout << nth_prime(n) << endl;
	
	return 0;
}
