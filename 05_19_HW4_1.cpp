#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	bool is_even1 = ((num % 2) == 0);
	
	bool is_even2 = ((double)num / 2.0) - (num / 2) == 0; 
	
	bool is_even3 = ((num % 10) == 0) || ((num % 10) == 2) || ((num % 10) == 4) || ((num % 10) == 6) || ((num % 10) == 8);
	
	cout << is_even1 << " " << is_even2 << " " << is_even3 << endl;
	
	return 0;
}