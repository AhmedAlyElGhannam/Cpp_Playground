#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	
	int n;
	cin >> n;
	
	if (n == 2)
		cin >> num1 
			>> num2;
			
	if (n == 3)
		cin >> num1 
			>> num2
			>> num3;
			
	if (n == 4)
		cin >> num1 
			>> num2
			>> num3
			>> num4;
			
	if (n == 5)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5;
			
	if (n == 6)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5
			>> num6;
	
	if (n == 7)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5
			>> num6
			>> num7;
	
	
	if (n == 8)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5
			>> num6
			>> num7
			>> num8;
			
	if (n == 9)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5
			>> num6
			>> num7
			>> num8
			>> num9;
			
	if (n == 10)
		cin >> num1 
			>> num2
			>> num3
			>> num4
			>> num5
			>> num6
			>> num7
			>> num8
			>> num9
			>> num10;
	
	int max = num1;
	
	if ((max < num2) && (n <= 2))
	{
		max = num2;
	}
	
	if ((max < num3) && (n <= 3))
	{
		max = num3;
	}
	
	if ((max < num4) && (n <= 4))
	{
		max = num4;
	}
	
	if ((max < num5) && (n <= 5))
	{
		max = num5;
	}
	
	if ((max < num6) && (n <= 6))
	{
		max = num6;
	}
	
	if ((max < num7) && (n <= 7))
	{
		max = num7;
	}
	
	if ((max < num8) && (n <= 8))
	{
		max = num8;
	}
	
	if ((max < num9) && (n <= 9))
	{
		max = num9;
	}
	
	if ((max < num10) && (n <= 10))
	{
		max = num10;
	}
	
	cout << max << endl;
	
	return 0;
}