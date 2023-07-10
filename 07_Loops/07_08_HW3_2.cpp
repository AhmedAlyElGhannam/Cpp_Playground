#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int temp = n;
	
	while (temp != 0)
	{
		cout << (temp % 10);
		temp /= 10;
	}
	cout << " ";
	
	temp = n;
	while (temp != 0)
	{
		cout << ((temp % 10) * 3);
		temp /= 10;
	}
	cout << endl;
	
	return 0;
}