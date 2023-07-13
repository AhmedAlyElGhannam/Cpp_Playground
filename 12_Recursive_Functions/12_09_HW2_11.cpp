#include <iostream>
#include <string>
using namespace std;

int prefix_sum(int arr[], int n) //
{
	if (n == 1)
		return arr[0];
		
	return arr[n-1] + prefix_sum(arr, n - 1);
}

int main()
{	
	int arr[5] = {1, 3, 4, 6, 7};
	int n = 3;
	
	cout << prefix_sum(arr, n) << endl;
	
	return 0;
}

