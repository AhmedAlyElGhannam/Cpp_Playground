#include <iostream>
using namespace std;

int main()
{
	string input, str;
	
	getline(cin, input);
	getline(cin, str);
	
	bool is_prefix = true;
	
	if (str.size() > input.size())
		is_prefix = false;
	
	for (int i = 0; i < str.size(); i++) // loop over the short string size
	{
		if (input[i] != str[i])
		{
			is_prefix = false;
			break;
		}
	}
	
	cout << is_prefix << endl; 
	
	return 0;
}





