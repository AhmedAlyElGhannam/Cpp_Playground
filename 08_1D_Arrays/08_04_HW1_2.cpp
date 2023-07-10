#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	int min = 9000;
	int max = -696942;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (min > arr[i])
		{
			min = arr[i];
		}
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] == min)
		{
			arr[i] = max;
		}
		else if (arr[i] == max)
		{
			arr[i] = min;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " "; 
	}
	
	cout << endl;
	
	return 0; 
}