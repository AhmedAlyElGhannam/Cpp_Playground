#include <iostream>
#include <stack>
using namespace std;

// next greater element in an array USING STACK
int next_greater_element(stack<int> stk)
{
	int next_max = -1;
	int elem = stk.top();
	stk.pop();
	while (!stk.empty())
	{
		if (elem < stk.top())
		{
			next_max = stk.top();
			break;
		}
		stk.pop();
	}
	return next_max;
}


int main() 
{
	stack<int> stk;
	
	int arr[69];
	int size = 0;
	
	int choice;
	cin >> choice;
	
	while (choice--)
	{
		cin >> arr[size++];
	}
			
	// populate stack with arr[0] at the top
	for (int i = size-1; i >= 0; i--)
		stk.push(arr[i]);
		
	while ((int)stk.size())
	{
		cout << next_greater_element(stk) << " ";
		stk.pop();
	}
	
	cout << endl;
	
	return 0;
}
