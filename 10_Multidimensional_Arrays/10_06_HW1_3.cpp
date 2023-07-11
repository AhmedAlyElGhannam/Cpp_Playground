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
			cin >> matrix[j][i];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		
		cout << "\n";
	}
	
	return 0;
}
