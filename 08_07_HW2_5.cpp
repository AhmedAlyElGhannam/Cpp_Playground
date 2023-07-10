#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[900];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = -1;
	}
		
	int number_flag[500 + 1] = {0};
	
	int temp = 0;
			
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		
		if (number_flag[temp] == 0)
		{
			arr[i] = temp;
			number_flag[temp] = 1;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != -1)
		{
			cout << arr[i] << " ";
		}
	}
	
	cout << endl;
	
	return 0;
}