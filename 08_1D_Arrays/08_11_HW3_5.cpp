#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int temp;
	int arr[200] = {0};
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 0)
		{
			arr[i] = -1;
		}
		else if (temp == 1)
		{
			arr[i] = 1;
		}
	}
		
	
	
	for (int i = 0; i < n; i++)
	{
		
	}
	
	return 0;
}





