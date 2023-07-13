#include <iostream>
#include <string>
using namespace std;

int suffix_sum(int arr[], int len, int n) //
{
	if (len == n)
		return arr[len - 1];
		
	return arr[len-1] + suffix_sum(arr, len-1, n);
}

int main()
{	
	int arr[5] = {1, 3, 4, 6, 7};
	int n = 3;
	
	cout << suffix_sum(arr, 5, n) << endl;
	
	return 0;
}

