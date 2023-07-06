#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	bool is_even = (a % 2 == 0);
	bool is_odd = (a % 2 == 1);
	
	cout << (100 * is_even) + (7 * is_odd) << endl;
	
	
	return 0;
}