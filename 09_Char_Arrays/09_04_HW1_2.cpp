#include <iostream>
using namespace std;

int main()
{
	string input, str;
	
	getline(cin, input);
	getline(cin, str);
	
	bool is_suffix = true;
	
	if (str.size() > input.size())
		is_suffix = false;
		
	for (int i = 0; i < str.size(); i++) 
	{
		if (input[input.size() - i - 1] != str[str.size() - i - 1])
		{
			is_suffix = false;
			break;
		}
	}
	
	cout << is_suffix << endl; 
	
	return 0;
}





