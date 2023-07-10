#include <iostream>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
		
	int symbol_counter = 0;
	
	for (int i = 0; i < (int)str.size(); i++) // 111222aabbb
	{
		if ((i != 0) && (str[i - 1] != str[i]))
		{			
			cout << str[i - 1] << symbol_counter;
			cout << "_";
			symbol_counter = 0;
		}			
		symbol_counter++;
		if (i == (int)str.size() - 1)
		{
			cout << str[i] << symbol_counter;
			break;
		}
	}
	
	cout << endl; 
	
	return 0;
}