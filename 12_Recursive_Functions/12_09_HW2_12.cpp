#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int arr[], int start, int end) 
{
	if (start >= end)
		return true;
	
	if (arr[start] != arr[end])
		return false;
	
	return is_palindrome(arr, start + 1, end - 1);
}
// we can ignore using start since we can just add 1 to arr to 
// shift the starting element. (C++ thingy)
int main()
{	
	int arr[5] = {1, 4, 4, 3, 1};
	
	cout << is_palindrome(arr, 0, 4) << endl;
	
	return 0;
}

