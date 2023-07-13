#include <iostream>
#include <string>
using namespace std;

void left_max(double arr[], int len) //
{
	if (len == 1)
		return;
	
	left_max(arr, len-1);
	
	arr[len-1] = max(arr[len-1], arr[len-2]);
}


int main()
{	
	double arr[5] = {1.0, 8.0, 2.0, 10.0, 3.0};
	
	left_max(arr, 5);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}