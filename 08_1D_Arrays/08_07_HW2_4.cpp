#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	int digit_counter[10] = {0};
	
	int temp = 0;
			
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
		for (int j = 0; j < 10; j++)
		{
			temp = arr[i];
			
			while (temp)
			{
				if (int digit = temp % 10; digit == j)
				{
					digit_counter[j]++;
				}
				temp /= 10;
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << " " << digit_counter[i] << endl;
	}
			
	return 0;
}