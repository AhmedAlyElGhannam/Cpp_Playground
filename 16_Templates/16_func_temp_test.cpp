#include <iostream>
using namespace std;

template<typename Type>
Type mymax(Type a, Type b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	cout << mymax('A', 'X') << endl;
	cout << mymax<char>('A', 'X') << endl;
	cout << mymax<int>('A', 'X') << endl;
	return 0;
}