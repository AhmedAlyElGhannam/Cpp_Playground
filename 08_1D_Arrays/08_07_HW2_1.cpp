#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	int min1 = 696942, min2 = 69694, min3 = 6969;
			
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] < min3)
		{
			min3 = arr[i];
		}
		
		if (arr[i] < min2)
		{
			min3 = min2;
			min2 = arr[i];
		}
		
		if (arr[i] < min1)
		{
			min3 = min2;
			min2 = min1;
			min1 = arr[i];
		}
	}
	
	cout << min1 << " " << min2 << " " << min3 << " " << endl;
	
	return 0;
}