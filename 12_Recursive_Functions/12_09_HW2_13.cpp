#include <iostream>
#include <string>
using namespace std;

bool is_prefix(string main, string prefix, int start_pos = 0) //
{
	if (start_pos == (int)prefix.size())
		return true;
	
	if (main[start_pos] != prefix[start_pos])
		return false;
	
	return is_prefix(main, prefix, start_pos + 1);
}

int main()
{	
	string hehe = "hahhahahahahha";
	string hoho = "hahha";
	string haha = "haha";
	cout << is_prefix(hehe, hoho) << endl 
		 << is_prefix(hehe, haha) << endl;
	
	return 0;
}

