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
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((i - 1 >= 0) && (j - 1 >= 0)) // look top left row-- && col--
			{
				if (!(matrix[i][j] > matrix[i - 1][j - 1]))
					continue;
			}
			
			if ((i - 1 >= 0) && (j + 1 < m)) // look top right row-- && col++
			{
				if (!(matrix[i][j] > matrix[i - 1][j + 1]))
					continue;
			}
			
			if ((i + 1 < n) && (j - 1 >= 0)) // look bottom left row++ && col--
			{
				if (!(matrix[i][j] > matrix[i + 1][j - 1]))
					continue;
			}
			
			if ((i + 1 < n) && (j + 1 < m)) // look bottom right row++ && col++
			{
				if (!(matrix[i][j] > matrix[i + 1][j + 1]))
					continue;
			}
			
			if (i - 1 >= 0) // look up row-- && col
			{
				if (!(matrix[i][j] > matrix[i - 1][j]))
					continue;
			}
			
			if (i + 1 < n) // look down row++ && col
			{
				if (!(matrix[i][j] > matrix[i + 1][j]))
					continue;
			}
			
			if (j - 1 >= 0) // look left row && col--
			{
				if (!(matrix[i][j] > matrix[i][j - 1]))
					continue;
			}
			
			if (j + 1 < m) // look right row && col++
			{
				if (!(matrix[i][j] > matrix[i][j + 1]))
					continue;
			}
			
			cout << i << " " << j << endl;
			
		}
	}
	
	return 0;
}
