#include <iostream>
using namespace std;

int main()
{
	int a = 210;
	
	a /= 2; // a=105
	cout << a << "\n"; // 105
	
	cout << (a /= 3) << "\n"; // 35
	cout << (a /= 5) << "\n"; // 7
	cout << (a /= 7) << "\n"; // 1
	
	cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n"; // 1
	
	a = 10;
	cout << a++ + 10 << "\n"; // 20 (a=11)
	cout << ++a + 10 << "\n"; // 22 (a=12)
	cout << a-- + 10 << "\n"; // 22 (a=11)
	cout << --a + 10 << "\n"; // 20 (a=10)
	
	int b = 20;
	cout << a++ + ++b << "\n"; // 31 (a=11) (b=21)
	
	cout << a << "\n"; // 11
	++a += 10; // a=22
	cout << a << "\n"; // 22
	
	return 0;
}