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
	
	int commands = 0;
	cin >> commands;
	int init_row = 0;
	int init_col = 0;
	
	while (commands--)
	{
		int direction, steps;
		cin >> direction >> steps;
		
		switch (direction)
		{
			case (1): // up -> col is constant, row decreases
				while (steps--)
				{
					init_row--;
					if (init_row < 0)
						init_row = n - 1;
				}
			break;
			case (2): // right -> row is const, col increases
				while (steps--)
				{
					init_col++;
					if (init_col == m)
						init_col = 0;
				}
			break;
			
			case (3): // down -> col is constant, row increases
				while (steps--)
				{
					init_row++;
					if (init_row == n)
						init_row = 0;
				}
			break;
			
			case (4): // left -> row is const, col decreases
				while (steps--)
				{
					init_col--;
					if (init_col < 0)
						init_col = m - 1;
				}
			break;
		}
		cout << "(" << init_row << ", " << init_col << ")" << endl;
	}
	
	return 0;
}
