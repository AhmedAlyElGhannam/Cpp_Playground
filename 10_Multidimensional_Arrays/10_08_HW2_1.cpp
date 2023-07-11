#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int matrix[50][50] = {{0}};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];
	}
	
	int query = 0;
	int i, j, r, c;
	
	bool is_prime;
	int grid_prime_counter = 0;
	
	cin >> query;
	
	while (query--)
	{
		cin >> i >> j >> r >> c;
		is_prime = true;
		for (int x = i; x < r; x++)
		{
			for (int y = j; y < c; y++)
			{
				for (int z = 2; z < matrix[i][j]/2; z++)
				{
					if (matrix[i][j] % i == 0)
					{
						is_prime = false;
						break;
					}
					else
						grid_prime_counter++;
				}
			}
		}
		
		cout << grid_prime_counter << endl;
		
	}
	
	return 0;
}
