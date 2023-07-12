#include <iostream>
#include <string>
using namespace std;

string reverse_str(const string &str)
{
	string reversed_str = str;
	for (int i = 0; i < (int)str.size(); i++)
	{
		reversed_str[(int)str.size() - i - 1] = str[i];
	}
	return reversed_str;
}



int main()
{
	string str;
	cin >> str;
	
	cout << reverse_str(str) << endl;
		
	return 0;
}
