#include <iostream>
#include <string>
using namespace std;

void len_3n_plus1(int n)
{
	static int counter = 0;
	counter++;
	if (n == 1)
	{
		cout << counter << endl;
		return;
	}
	
	if (n % 2 == 0)
		len_3n_plus1(n / 2);
	else
		len_3n_plus1(3 * n + 1);
}


int main()
{	
	len_3n_plus1(6);
	return 0;
}
