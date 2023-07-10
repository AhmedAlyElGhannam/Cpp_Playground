#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3 = -1;
	
	cin >> num1 >> num2;
	
	// using a 3rd variable
	//num3 = num1;
	//num1 = num2;
	//num2 = num3;
	
	// without using a third variable
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	
	cout << num1 << " " << num2 << endl;
	
	return 0;
}