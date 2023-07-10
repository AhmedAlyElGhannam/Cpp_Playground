#include <iostream>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
		
	int str_size = input.size() - 1;
	
	int is_first_time = true;
	
	for (int i = 0; i < str_size - 1; i++)
	{
		if (input[i] == input[i+1])
		{
			cout << input[i];
			if (is_first_time)
			{
				is_first_time = false;
				cout << input[i];
			}
			if ((i + 1) == (str_size - 1))
				cout << input[i];
		}
			
		else
		{
			cout << " ";
			is_first_time = true;
		}
			
	}
	
	cout << endl; 
	
	return 0;
}