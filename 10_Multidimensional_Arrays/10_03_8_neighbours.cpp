#include <iostream>
#include <string>
using namespace std;

int main()
{
	int grid[3][3] = {{1, 2, 3}, 
					  {4, 5, 6},
					  {7, 8, 9}}; // standing at [1][1]
	
	
	// go up == row - 1 && col
	int up_row_displacement = 1 - 1;
	int up_col_displacement = 1;
	cout << grid[up_row_displacement][up_col_displacement] << endl;
	
	// go down == row + 1 && col
	int down_row_displacement = 1 + 1;
	int down_col_displacement = 1;
	cout << grid[down_row_displacement][down_col_displacement] << endl;
	
	// go left == row && col - 1
	int left_row_displacement = 1;
	int left_col_displacement = 1 - 1;
	cout << grid[left_row_displacement][left_col_displacement] << endl;
	
	// go right == row && col + 1
	int right_row_displacement = 1;
	int right_col_displacement = 1 + 1;
	cout << grid[right_row_displacement][right_col_displacement] << endl;
	
	// go upper-left == row - 1 && col - 1
	int upper_left_row_displacement = 1 - 1;
	int upper_left_col_displacement = 1 - 1;
	cout << grid[upper_left_row_displacement][upper_left_col_displacement] << endl;
	
	// go upper-right == row - 1 && col + 1
	int upper_right_row_displacement = 1 - 1;
	int upper_right_col_displacement = 1 + 1;
	cout << grid[upper_right_row_displacement][upper_right_col_displacement] << endl;
	
	// go lower-left == row + 1 && col - 1
	int lower_left_row_displacement = 1 + 1;
	int lower_left_col_displacement = 1 - 1;
	cout << grid[lower_left_row_displacement][lower_left_col_displacement] << endl;
	
	// go lower-right == row + 1 && col + 1
	int lower_right_row_displacement = 1 + 1;
	int lower_right_col_displacement = 1 + 1;
	cout << grid[lower_right_row_displacement][lower_right_col_displacement] << endl;
	
	
	
	return 0;
}