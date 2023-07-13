#include <iostream>
#include <string>
using namespace std;

int arr_max(int arr[], int len) //
{
	if (len == 1)
		return arr[0];
	
	
	return max(arr[len-1], arr_max(arr, len - 1)); // max() is a built-in function
}


int main()
{	
	int arr[5] = {1, 2, 3, 4, 5};
	cout << arr_max(arr, 5) << endl;
	return 0;
}
