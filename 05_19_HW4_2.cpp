#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	int units = a % 10;
	a /= 10;
	
	int tens = a % 10;
	a /= 10;
	
	int hundreds = a % 10;
	a /= 10;
	
	cout << units + tens + hundreds << endl;
	
	return 0;
}