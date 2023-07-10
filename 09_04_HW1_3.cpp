#include <iostream>
using namespace std;

int main()
{
	string input, str;
	getline(cin, input);
	getline(cin, str);
	
	bool is_substring = true;
	
	if (str.size() > input.size())
		is_substring = false;
			
	for (int j = 0; j <= input.size() - 1; j++) 
	{
		if (input[j] == str[0])
		{
			for (int i = 1; i <= str.size() - 1; i++)
			{
				if (input[j + i] != str[i])
				{
					is_substring = false;
					break;
				}
			}
		}
	}
	
	cout << is_substring << endl; 
	
	return 0;
}