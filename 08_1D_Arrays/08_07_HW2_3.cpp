#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[900];
	
	int number_flag[270 + 500 + 1] = {0}; // freq array
		
	int max_freq[2] = {0};
			
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		number_flag[arr[i]] += 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (number_flag[arr[i]] > max_freq[0])
		{
			max_freq[0] = number_flag[arr[i]];
			max_freq[1] = arr[i];
		}
	}
	
	cout << max_freq[1] << " repeated " << max_freq[0] << " times."<< endl;
		
	return 0;
}