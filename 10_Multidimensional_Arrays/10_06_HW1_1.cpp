#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int m;
	cin >> n >> m;
	int matrix[50][50] = {{0}};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];
	}
	
	int query = 0;
	cin >> query;
	
	int row1, row2;
	bool is_smaller_row;
	
	while (query--)
	{
		is_smaller_row = true;
		
		cin >> row1 >> row2;
		
		
		for (int i = 0; i < m; i++) // iterating on columns
		{
			if (matrix[row1-1][i] > matrix[row2-1][i])
			{
				is_smaller_row = false;
				break;
			}
		}
		
		cout << is_smaller_row << endl;
	}
	
	return 0;
}