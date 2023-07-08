#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int i = 0;
	while (i <= n)
	{
		if (i % 8 == 0)
			cout << i << " ";
		else if ((i % 3 == 0) && (i % 4 == 0))
			cout << i << " ";
		
		i++;
	}
	cout << endl;
	
	return 0;
}