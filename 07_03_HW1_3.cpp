#include <iostream>
using namespace std;

int main()
{
	int n, row, star_count;
	
	cin >> n;
	
	row = 1;
	while (row <= n)
	{
		star_count = 1;
		while (star_count <= row)
		{
			cout << '*';
			star_count++;
		}
		cout << endl;
		row++;
	}
	
	return 0;
}