#include <iostream>
#include <string>
using namespace std;

int main()
{
	int depth, row, col;
	cin >> depth << row << col;
	int matrix[50][50][50] = {{{0}}};
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < depth; k++)
				cin >> matrix[i][j][k];
		}
	}

	
	
	
	
	return 0;
}
