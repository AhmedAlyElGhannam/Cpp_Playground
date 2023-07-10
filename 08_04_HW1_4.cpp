#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	bool is_palindrome = true;
		
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < n/2; i++)
	{
		if ((arr[i] != arr[n - i - 1]))
		{
			is_palindrome = false;
			break;
		}
	}
	
	cout << is_palindrome << endl;
	
	return 0;
}