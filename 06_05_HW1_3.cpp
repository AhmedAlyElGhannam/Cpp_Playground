#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int answer = -1;

	if (a < 100)
	{
		answer = a;
	}
	
	if ((b > answer) && (b < 100))
	{
		answer = b;
	}
	
	if ((c > answer) && (c < 100))
	{
		answer = c;
	}
	
	cout << answer << endl;
	
	return 0;
}