#include <iostream>
#include <string>
using namespace std;

void arr_increment(double arr[], int len)
{
	if (len == 1)
		return;
	
	arr[len - 1] += (len - 1);
	
	arr_increment(arr, len-1);
}


int main()
{	
	double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	
	arr_increment(arr, 5);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}