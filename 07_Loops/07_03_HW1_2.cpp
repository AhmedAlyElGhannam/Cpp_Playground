#include <iostream>
using namespace std;

int main()
{
	int n;
	char x;
	
	cin >> n >> x;
	
	while (n > 0)
	{
		cout << x << " ";
		n--;
	}
	
	cout << endl;
	
	return 0;
}