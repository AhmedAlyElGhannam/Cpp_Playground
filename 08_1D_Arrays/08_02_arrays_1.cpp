#include <iostream>
using namespace std;

int main()
{
	int n, max = -696942, almost_max = -696942;
	cin >> n;
	
	int arr[200] = {0};
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			almost_max = max;
			max = arr[i];
		}
	}
	
	cout << max << " " << almost_max << endl;
	
	return 0;
}