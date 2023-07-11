#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	char tic_tac_toe[9][9];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			tic_tac_toe[i][j] = '.';
	}
		
	int row_coordinate;
	int col_coordinate;
	
	int turn_player = 1; // 1 for x && 0 for o
	
	char turn_player_symbol;
	
	int turn_counter = 0;
	
	bool is_connected[3];
	
	while (true)
	{
		is_connected[0] = true;
		is_connected[1] = true;
		is_connected[2] = true;
		
		if (turn_counter == n * n)
		{
			cout << "It's a TIE!\n"
				 << "B R U H!\n";
			break;
		}
		
		if (turn_player)
			turn_player_symbol = 'x';
		else
			turn_player_symbol = 'o';
		
		cout << "Player " <<  turn_player_symbol << " turn. Enter empty location (r, c): ";
		
		cin >> row_coordinate >> col_coordinate;
		
		
		if ((tic_tac_toe[row_coordinate-1][col_coordinate-1] != '.') || 
		    (row_coordinate > n) ||
		    (col_coordinate > n) ||
		    (row_coordinate < 0)  ||
		    (col_coordinate < 0))
		{
			cout << "Invalid input! Try again." << endl;
			continue;
		}
		else
		{
			turn_counter++;
			tic_tac_toe[row_coordinate-1][col_coordinate-1] = turn_player_symbol;
		}
		
		// print board state after move
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << tic_tac_toe[i][j] << " ";
			cout << endl;
		}
		
		// only check for winning states IF each player has at least 'n' symbols on board 
		// to avoid extra overhead (2n-1)
		if (turn_counter >= (2 * n - 1)) // CHECK
		{
			for (int i = 0; i < n; i++)
			{
				if (tic_tac_toe[row_coordinate-1][i] != turn_player_symbol)
				{
					is_connected[0] = false;
					break;
				}
			}
			
			for (int i = 0; i < n; i++)
			{
				if (tic_tac_toe[i][col_coordinate-1] != turn_player_symbol)
				{
					is_connected[1] = false;
					break;
				}
			}
			
			for (int i = 0; i < n; i++)
			{
				if (tic_tac_toe[i][i] != turn_player_symbol) 
				{
					is_connected[2] = false;
					break;
				}
			}	
			
			if (is_connected[0] || is_connected[1] || is_connected[2])
			{
				cout << "Player " << turn_player_symbol << " won!" << endl;
				break;
			}
		}
		
		turn_player ^= 1;
	}
	
	return 0;
}
