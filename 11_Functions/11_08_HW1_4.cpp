#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int arr[], int arr_size)
{
	bool is_palindrome_flg = true;
	for (int i = 0; i < arr_size/2; i++)
	{
		if (arr[i] != arr[arr_size - i - 1])
		{
			is_palindrome_flg = false;
			break;
		}
	}
	return is_palindrome_flg;	
}
int main()
{	
	int n;
	cin >> n;
	int arr[109] = {0};
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << is_palindrome(arr, n) << endl;
	return 0;
}
