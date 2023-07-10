#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	bool is_increasing = true;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < n - 1; i++) 
	{
		if (arr[i] > arr[i + 1])
		{
			is_increasing = false;
			break;
		}
	}
	
	cout << is_increasing << endl;
	
	return 0; 
}