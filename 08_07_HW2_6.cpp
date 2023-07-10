#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[900] = {0};
	
	int digit_freq[500 + 1] = {0};
				
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		digit_freq[arr[i]]++;
	}
	
	for (int i = 0; i < 501; i++)
	{
		while (digit_freq[i])
		{
			cout << i << " ";
			digit_freq[i]--;
		}
	}
	
	cout << endl;
	
	return 0;
}