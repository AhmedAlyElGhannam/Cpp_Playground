#include <iostream>
#include <string>
using namespace std;

bool is_prime(int n, int test_num = 3) //
{
	if (n == 2)
		return true;
	
	if ((n <= 1) || (n % 2 == 0))
		return false;
	
	if (n == test_num)
		return true;
	
	if (n % test_num == 0)
		return false;
	
	return is_prime(n, test_num + 1);
 	 
	
}

int count_primes(int start, int end)
{
	if (start > end)
		return 0;
	
	int result = count_primes(start+1, end);
	if (is_prime(start))
		result += 1;
	
	return result;
}

int main()
{	
	cout << count_primes(1,10) << endl;
	
	return 0;
}

