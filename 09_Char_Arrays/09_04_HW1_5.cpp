#include <iostream>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
		
	int digits = input.size();
		
	int number = 0;
	
	int multiplier = 1;
	
	for (int i = 1; i < digits; i++)
		multiplier *= 10;
	
	for (int i = 0; i < digits; i++)
	{
		number += (((int)input[i] - 48) * multiplier); // 48 corresponds to '0'
		multiplier /= 10;
	}
	
	cout << number << " " << number * 3 << endl; 
	
	return 0;
}