#include <iostream>
#include <string>
using namespace std;

double arr_avg(double arr[], int len) //
{
	if (len == 1)
		return arr[0];
	
	return (arr[len-1] + (arr_avg(arr, len-1) * (len - 1))) / len;
}



int main()
{	
	double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	
	cout << arr_avg(arr, 5) << endl;
	return 0;
}