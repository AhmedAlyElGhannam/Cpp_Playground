#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	getline(cin, str1);
	
	int temp = 0;
	
	// add 5555 to str1
	
	int carry = 0;
	int five_counter = 4;
			
	for (int i = 0; i < (int)str1.size(); i++)
	{
		if (five_counter)
		{
			temp = (int)(str1[str1.size() - i - 1] - 48) + 5 + carry;
			five_counter--;
		}	
		else
			temp = (int)(str1[str1.size() - i - 1] - 48) + carry;
		
		carry = 0;
		
		if (temp > 9)
		{
			temp -= 10;
			carry++;
		}
		
		str1[str1.size() - i - 1] = temp + 48;
	}

	
	cout << str1 << endl;
	
		
	return 0;
}

