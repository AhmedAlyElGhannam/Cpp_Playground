#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
	int smol_pair = 0;
		
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < j; i++)
		{
			if (smol_pair < (arr[i] + arr[j] + j - i))
			{
				smol_pair = arr[i] + arr[j] + j - i;
			}
		}
	}
	
	cout << smol_pair << endl;
	
	return 0;
}