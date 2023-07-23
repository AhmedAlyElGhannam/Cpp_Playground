#include <iostream>
#include <stack>
using namespace std;

// reverse a number using stack

int reverse_num(int num) // 1234 => 4321 (function must return a number - cannot get away with just printing them in reverse order)
{
	int reversed_num = 0;
	int scale = 1;
	stack<int> stk;
	while (num)
	{
		stk.push(num % 10); //1 2 3 4
		num /= 10;
	}
	
	// digits are from top to bottom: 1 2 3 4
	while ((int)stk.size())
	{
		reversed_num = reversed_num + (stk.top() * scale);
		stk.pop();
		scale *= 10;
	}
	
	return reversed_num;
}

int main()
{
	int num;
	
	cin >> num;
	
	cout << "\n"
		 << num
		 << " "
		 << reverse_num(num)
		 << endl;
	
	return 0;
}
