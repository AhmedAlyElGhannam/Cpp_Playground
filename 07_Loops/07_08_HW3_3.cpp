#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	int i = 1, j;
	
	while (i <= n)
	{
		j = 1;
		while (j <= m)
		{
			cout << i << " x " << j << " = " << (i * j) << endl;
			j++;
		}
		i++;
	}
	
	cout << endl;
	
	return 0;
}