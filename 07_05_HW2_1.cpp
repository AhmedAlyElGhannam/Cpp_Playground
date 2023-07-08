#include <iostream>
using namespace std;

int main()
{
	int n, row, star_count;
	
	cin >> n;
	
	row = 1;
	int spaces = 0;
	while (row <= n)
	{
		star_count = 1;
		spaces = n - row;
		while (star_count <= spaces)
		{
			cout << " ";
			star_count++;
		}
		
		star_count = 1;
		
		while (star_count <= (2 * row - 1))
		{
			cout << '*';
			star_count++;
		}
		cout << endl;
		row++;
	}
	
	return 0;
}