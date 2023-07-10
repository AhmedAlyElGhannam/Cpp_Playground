#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a; // 2405
	
	int years = a / 360;
	
	a %= 360;
	
	int months = a / 30;
	
	a %= 30;
	
	int days = a;
	
	cout << years << " " << months << " " << days << endl;
	
	return 0;
}