#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[50][50] = {{0}};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	}
	
	int upper_tri_sum = 0;
	int lower_tri_sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			upper_tri_sum += matrix[i][j];
		
		for (int k = i; k < n; k++)
			lower_tri_sum += matrix[k][i];
	}
	
	cout << upper_tri_sum << " " << lower_tri_sum << endl;
	
	return 0;
}