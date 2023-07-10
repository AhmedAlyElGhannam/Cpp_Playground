#include <iostream>
using namespace std;

int main()
{
	int list_size;
	cin >> list_size;
	
	int arr[200] = {0};
	
	for (int i = 0; i < list_size; i++)
	{
		cin >> arr[i];
	}
	
	
	/*
	
	-window size ranges between 1 & list size
	-it is safe to assume that inc_sub_arrCounter should ALWAYS start by the list_size then add
	on it
	-if is_increasing became false at any moment, this designated window_size will be ignored
	-
	
	*/
	
	
	bool is_increasing = true;
	int inc_sub_arrCounter = list_size;
	
	
	
	for (int window_size = 2, start = 0, end = window_size - 1; end < list_size; ++start, ++end)
	{	
		for (int j = start; j < end; j++)
		{
			if (arr[j] > arr[j+1])
			{
				is_increasing = false;
				break;
			}
		}
		if (is_increasing)
		{
			inc_sub_arrCounter++;
		}
		is_increasing = true;
		
	}
	
	cout << inc_sub_arrCounter << endl;
	
	return 0;
}

