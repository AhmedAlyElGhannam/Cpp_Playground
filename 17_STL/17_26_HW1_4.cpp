#include <iostream>
#include <map>
#include <vector>
using namespace std;

// print all strings that start with a certain prefix using maps

int main() //
{
	map<string, vector<string>> mp; // the idea is to add ALL possible prefixes to each name!
	int num;
	cin >> num;
	
	while (num--)
	{
		string temp;
		cin >> temp;
		
		string cur = "";
		for (auto c : temp)
		{
			cur += c;
			mp[cur].push_back(temp);
		}
			
	}
	
	cin >> num;
	
	while (num--)
	{
		string prefix;
		cin >> prefix;
		
		for (auto cur : mp[prefix])
			cout << cur << " ";
		cout << endl;
	}
	
	return 0;
}
