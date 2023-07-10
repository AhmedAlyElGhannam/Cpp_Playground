#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[200] = {0};
	
			
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int q;
	cin >> q;
	int queries[200] = {0};
	int index_counter;
	
	for (int i = 0; i < q; i++)
	{
		cin >> queries[i];
		index_counter = -1;
		for (int j = 0; j < n; j++)
		{
			if (queries[i] == arr[j])
			{
				index_counter = j;
			}
		}
		cout << index_counter << endl;
	}
		
	return 0;
}