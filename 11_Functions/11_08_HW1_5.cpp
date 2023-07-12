#include <iostream>
#include <string>
using namespace std;

int power(int m, int p)
{
	int result = 1;
	while (p--)
		result *= m;
	return result;
}

void set_powers(int arr[], int len = 5, int m = 2)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = power(m, i);
	}
}

int main()
{	
	int arr[7] = {0};
	
	set_powers(arr, 7, 2);
	
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
