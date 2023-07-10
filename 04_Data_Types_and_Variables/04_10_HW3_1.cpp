#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, temp = -1; // a b c -> b c a
	
	cin >> num1 >> num2 >> num3;  // a b c -> b a c -> b c a
	
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	
	num2 ^= num3;
	num3 ^= num2;
	num2 ^= num3;
	
	// There is a 4 line solution...?! -> can be done by imitating circular shift
	//temp = num1;
	//num1 = num2;
	//num2 = num3;
	//num1 = temp;
	
	cout << num1 << " " << num2 << " " << num3 << endl;
	
	return 0;
}