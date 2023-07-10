#include <iostream>
using namespace std;

int main()
{
	string input, str;
	getline(cin, input);
	getline(cin, str);
	
	bool is_subsequence = false;
	
	int next_to_match = 0;
		
	for (int i = 0; i <= input.size() - 1; i++) 
	{
		if (input[i] == str[next_to_match])
		{
			next_to_match++;
			if (next_to_match == (int)str.size())
			{
				is_subsequence = true;
				break;
			}
		}
	}
	
	cout << is_subsequence << endl; 
	
	return 0;
}