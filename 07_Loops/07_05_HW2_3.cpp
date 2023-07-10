#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int i = 0;
	int counter = 0;
	while (counter < n)
	{	
		if (i % 4 != 0)
		{
			cout << i << " ";
			counter++;
		}	
		i += 3;
	}
	cout << endl;
	
	return 0;
}