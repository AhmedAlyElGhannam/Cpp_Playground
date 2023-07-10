#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	a /= 1000;
	
	int thousands = a % 10;
	
	cout << thousands << endl;
	
	return 0;
}