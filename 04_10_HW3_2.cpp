#include <iostream>
using namespace std;

int main()
{
	double a, b;
	
	cin >> a >> b;
	
	// if b == -1 -> print 2*a+1 
	// if b == 1 -> print a*a
	// ((0.5*a*a*b) - 0.5*b + (0.5*a*a) + 0.5 + a - (a*b))
	
	cout << (0.5 * a * a * b) - (0.5 * b) + (0.5 * a * a) + 0.5 + a - (a * b) << endl;
	
	return 0;
}