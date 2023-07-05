#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	// n = 6 (even) -> (1 + 2 + 3 + 4 + 5 + 6) = 21
	// n = 5 (odd) -> (1 + 2 + 3 + 4 + 5) = 15
	// Formula = ((n + 1) * (n / 2)) + ((n % 2) * (n + 1) / 2)
	
	cout << ((n + 1) * (n / 2)) + ((n % 2) * (n + 1) / 2) << endl;
	
	return 0;
}