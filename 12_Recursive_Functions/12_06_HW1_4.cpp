#include <iostream>
#include <string>
using namespace std;

int arr_sum(int arr[], int len)
{
	if (len == 1)
		return arr[0];
	
	return arr[len-1] + arr_sum(arr, len-1);
}


int main()
{	
	int arr[5] = {1, 2, 3, 4, 5};
	
	cout << arr_sum(arr, 5) << endl;
	return 0;
}
