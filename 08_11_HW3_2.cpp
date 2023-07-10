#include <iostream>
using namespace std;

int main()
{
	int window_size, list_size;
	cin >> window_size >> list_size;
	
	int arr[200] = {0};
	
	for (int i = 0; i < list_size; i++)
	{
		cin >> arr[i];
	}
	
	int max_sum_temp;
	int max_sum[3] = {0}; //  max_sum & start & end
	
	for (int start = 0, end = window_size - 1; end < list_size; ++start, ++end)
	{	
		max_sum_temp = 0;
		for (int j = start; j <= end; j++)
		{
			max_sum_temp += arr[j];
		}
		
		if (max_sum[0] < max_sum_temp)
		{
			max_sum[0] = max_sum_temp;
			max_sum[1] = start;
			max_sum[2] = end;
		}
	}
	
	cout << max_sum[1] << " " << max_sum[2] << " " << max_sum[0] << endl;
	
	return 0;
}

